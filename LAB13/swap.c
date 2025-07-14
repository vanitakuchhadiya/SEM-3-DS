#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node {
    int info;
    struct node* link;
};

struct node* first = NULL;

// Insert at end
void insertAtEnd(int x) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->info = x;
    newNode->link = NULL;

    if (first == NULL) {
        first = newNode;
        return;
    }

    struct node* save = first;
    while (save->link != NULL) {
        save = save->link;
    }
    save->link = newNode;
}

// Print list
void printList(struct node* node) {
    while (node != NULL) {
        printf("%d", node->info);
        if (node->link != NULL)
            printf(" -> ");
        node = node->link;
    }
    printf("\n");
}

// Swap consecutive nodes
void swap() {
    if (first == NULL || first->link == NULL)
        return;

    struct node* prev = NULL;
    struct node* current = first;

    first = current->link;  // update head to second node

    while (current != NULL && current->link != NULL) {
        struct node* link = current->link;
        struct node* linkPair = link->link;

        link->link = current;
        current->link = linkPair;

        if (prev != NULL)
            prev->link = link;

        prev = current;
        current = linkPair;
    }
}

// Main function
int main() {
    for (int i = 1; i <= 8; i++) {
        insertAtEnd(i);
    }

    printf("Original List:\n");
    printList(first);

    swap();

    printf("After Swap:\n");
    printList(first);

}
