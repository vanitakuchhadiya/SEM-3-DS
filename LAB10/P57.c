#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node *link;
};

struct Node *first = NULL;

void insertAtFront(int x) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->info = x;
    newNode->link = first;
    first = newNode;
    printf("Inserted %d at front.\n", x);
}

void display() {
    if (first == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node *save = first;
    printf("Linked List: ");
    while (save != NULL) {
        printf("%d -> ", save->info);
        save = save->link;
    }
    printf("NULL\n");
}

void deleteFirst() {
    if (first == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node *save = first;
    first = first->link;
    printf("Deleted node with x %d from front.\n", save->info);
    free(save);
}

void insertAtEnd(int x) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->info = x;
    newNode->link = NULL;

    if (first == NULL) {
        first = newNode;
    } else {
        struct Node *save = first;
        while (save->link != NULL)
            save = save->link;
        save->link = newNode;
    }
    printf("Inserted %d at end.\n", x);
}

void deleteLast() {
    if (first == NULL) {
        printf("List is empty.\n");
        return;
    }
    if (first->link == NULL) {
        printf("Deleted node with x %d from end.\n", first->info);
        free(first);
        first = NULL;
        return;
    }

    struct Node *save = first;
    while (save->link->link != NULL)
        save = save->link;

    printf("Deleted node with x = %d from end.\n", save->link->info);
    free(save->link);
    save->link = NULL;
}

void deleteFromPosition(int pos) {
    if (first == NULL) {
        printf("List is empty.\n");
        return;
    }

    if (pos == 1) {
        deleteFirst();
        return;
    }

    struct Node *save = first;
    for (int i = 1; i < pos - 1 && save->link != NULL; i++) {
        save = save->link;
    }

    if (save->link == NULL) {
        printf("Invalid position.\n");
        return;
    }

    struct Node *delNode = save->link;
    save->link = delNode->link;
    printf("Deleted node with x %d from position %d.\n", delNode->info, pos);
    free(delNode);
}

void countNodes() {
    int count = 0;
    struct Node *save = first;
    while (save != NULL) {
        count++;
        save = save->link;
    }
    printf("Total number of nodes: %d\n", count);
}

int main() {
    int choice, x, pos;

    while (1) {
        printf("\n--- Singly Linked List Menu ---\n");
        printf("1. Insert at front\n");
        printf("2. Display all nodes\n");
        printf("3. Delete first node\n");
        printf("4. Insert at end\n");
        printf("5. Delete last node\n");
        printf("6. Delete node from specific position\n");
        printf("7. Count total nodes\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter x to insert at front: ");
                scanf("%d", &x);
                insertAtFront(x);
                break;
            case 2:
                display();
                break;
            case 3:
                deleteFirst();
                break;
            case 4:
                printf("Enter x to insert at end: ");
                scanf("%d", &x);
                insertAtEnd(x);
                break;
            case 5:
                deleteLast();
                break;
            case 6:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                deleteFromPosition(pos);
                break;
            case 7:
                countNodes();
                break;
            case 8:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}