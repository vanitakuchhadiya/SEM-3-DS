// WAP to split a circular linked list into two halves.
#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node* link;
};

struct node*first1=NULL;
struct node*first2=NULL;
struct node*first=NULL;
struct node*last=NULL;

void insertEnd(int x){
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    newNode->info=x;
    if(first==NULL){
        newNode->link=newNode;
        first=newNode;
        last=newNode;
        return;
    }

        newNode->link=first;
        last->link=newNode;
        last=newNode;

}
void printList(struct node* node) {
    if (node == NULL) return;
    struct node* save = node;
    do {
        printf("%d ", save->info);
        save = save->link;
    } while (save != node);
    printf("\n");
}

void splitList() {
    struct node *slow = first;
    struct node *fast = first;

    if (first == NULL || first->link == first)
        return;

    while (fast->link != first && fast->link->link != first) {
        fast = fast->link->link;
        slow = slow->link;
    }

    if (fast->link->link == first){
        fast = fast->link;
    }
    first1 = first;
    first2 = slow->link;

    slow->link = first1;
    fast->link = first2;
}

int main() {
    insertEnd(1);
    insertEnd(2);
    insertEnd(3);
    insertEnd(4);

    printf("Original Circular Linked List:\n");
    printList(first);

    splitList();

    printf("First Half:\n");
    printList(first1);

    printf("Second Half:\n");
    printList(first2);

    return 0;
}