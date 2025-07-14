#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node* link;
};

struct node* first = NULL; // Global pointer

// GCD function
int gcd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void insertEnd(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->info = data;
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

void printList() {
    struct node* temp = first;
    while (temp != NULL) {
        printf("%d", temp->info);
        if (temp->link != NULL)
            printf(" -> ");
        temp = temp->link;
    }
    printf("\n");
}

// Insert GCD node between every pair of adjacent nodes
void insertGCD() {
    struct node* current = first;
    while (current != NULL && current->link != NULL) {
        int g = gcd(current->info, current->link->info);

        struct node* newNode = (struct node*)malloc(sizeof(struct node));
        newNode->info = g;

        newNode->link = current->link;
        current->link = newNode;

        current = newNode->link;  // Move to the next original node
    }
}

int main() {
    insertEnd(18);
    insertEnd(6);
    insertEnd(10);
    insertEnd(3);

    printf("Original Linked List:\n");
    printList();

    insertGCD();

    printf("Linked List After Inserting GCD Nodes:\n");
    printList();

    return 0;
}
