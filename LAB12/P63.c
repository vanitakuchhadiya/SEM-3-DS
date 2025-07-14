#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node* link;
};

struct Node* insert(struct Node* first, int value) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->info = value;
    newNode->link = NULL;

    if (first == NULL)
        return newNode;

    struct Node* temp = first;
    while (temp->link != NULL)
        temp = temp->link;

    temp->link = newNode;
    return first;
}

struct Node* copyList(struct Node* first) {
    struct Node* newFirst = NULL;
    struct Node* temp = first;

    while (temp != NULL) {
        newFirst = insert(newFirst, temp->info);
        temp = temp->link;
    }

    return newFirst;
}

void printList(struct Node* first) {
    while (first!= NULL) {
        printf("%d -> ", first->info);
        first = first->link;
    }
    printf("NULL\n");
}

void main() {
    struct Node* original = NULL;

    original = insert(original, 1);
    original = insert(original, 2);
    original = insert(original, 3);

    printf("Original List: ");
    printList(original);

    
    struct Node* copy = copyList(original);

    printf("Copied List:   ");
    printList(copy);

   
}