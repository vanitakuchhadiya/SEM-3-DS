#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node* link;
};

struct node* first = NULL;

void insertEnd(int val) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->info = val;
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

void printList(struct node* first) {
    while (first != NULL) {
        printf("%d", first->info);
        if (first->link != NULL)
            printf(" -> ");
        first = first->link;
    }
    printf("\n");
}

void sorting(struct node* first) {
    struct node *i, *j;
    int temp;
    for (i = first; i != NULL; i = i->link) {
        for (j = i->link; j != NULL; j = j->link) {
            if (i->info > j->info) {
                temp = i->info;
                i->info = j->info;
                j->info = temp;
            }
        }
    }
}

int main() {
    insertEnd(10);
    insertEnd(50);
    insertEnd(80);
    insertEnd(30);
    insertEnd(20);

    printf("Original linked list:\n");
    printList(first);

    sorting(first);
    printf("After sorting linked list:\n");
    printList(first);

    return 0;
}
