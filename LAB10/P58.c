#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node* link;
};

struct node* createNode(int x) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->info = x;
    newNode->link = NULL;
    return newNode;
}

int areSame(struct node* first1, struct node* first2) {
    while (first1 != NULL && first2 != NULL) {
        if (first1->info != first2->info)
            return 0; 
        first1 = first1->link;
        first2 = first2->link;
    }
    return (first1 == NULL && first2 == NULL);
}


int main() {
   
    struct node* first1 = createNode(1);
    first1->link = createNode(2);
    first1->link->link = createNode(3);

    struct node* first2 = createNode(1);
    first2->link = createNode(2);
    first2->link->link = createNode(3);

    int same = areSame(first1, first2);
    if (same)
        printf("Both linked lists are same.\n");
    else
        printf("Linked lists are NOT same.\n");

}
