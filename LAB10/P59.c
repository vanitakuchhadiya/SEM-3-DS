#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node* link;
};

struct node* first = NULL;

// Insert node at end of the list
void insertAtEnd(int x) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->info = x;
    newNode->link = NULL;

    if (first == NULL) {
        first = newNode;
    } else {
        struct node* temp = first;
        while (temp->link != NULL) {
            temp = temp->link;
        }
        temp->link = newNode;
    }
}

void removeDuplicates() {
    struct node* current = first;

    while (current != NULL && current->link != NULL) {
        if (current->info == current->link->info) {
            struct node* duplicate = current->link;
            current->link = duplicate->link;
            free(duplicate);
        } else {
            current = current->link;
        }
    }
}

// Display the linked list
void display() {
    struct node* temp = first;
    while (temp != NULL) {
        printf("%d", temp->info);
        if (temp->link != NULL) {
            printf(" → ");
        }
        temp = temp->link;
    }
    printf("\n");
}

int main() {
    // Manually adding values: 1 → 1 → 6 → 13 → 13 → 13 → 27 → 27
    insertAtEnd(1);
    insertAtEnd(1);
    insertAtEnd(6);
    insertAtEnd(13);
    insertAtEnd(13);
    insertAtEnd(13);
    insertAtEnd(27);
    insertAtEnd(27);

    printf("Original list:\n");
    display();

    removeDuplicates();

    printf("List after removing duplicates:\n");
    display();

    return 0;
}
