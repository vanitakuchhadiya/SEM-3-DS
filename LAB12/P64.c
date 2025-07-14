#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node *link;
};

struct Node *first = NULL;

void insertAtFirst(int x) {
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->info = x;
    newNode->link = first;
    first = newNode;
}

void printList() {
    struct Node *temp = first;
    while (temp != NULL) {
        printf("%d ", temp->info);
        temp = temp->link;
    }
    printf("\n");
}

void reverseList() {
    struct Node *prev = NULL;
    struct Node *curr = first;
    struct Node *next = NULL;

    while (curr != NULL) {
        next = curr->link;   // Save next node
        curr->link = prev;   // Reverse the link
        prev = curr;         // Move prev forward
        curr = next;         // Move curr forward
    }

    first = prev;  // Update head pointer
}
int main() {
    insertAtFirst(10);
    insertAtFirst(20);
    insertAtFirst(30);
    insertAtFirst(40);
    insertAtFirst(50);

    printf("Original List:\n");
    printList();

    reverseList();

    printf("Reversed List:\n");
    printList();

    return 0;
}