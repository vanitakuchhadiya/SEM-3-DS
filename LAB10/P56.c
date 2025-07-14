#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node*link;
};

int main() {
    struct node* newNode;

    newNode = (struct node*)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d", &newNode->info);

    newNode->link = NULL;

    printf("You entered: %d\n", newNode->info);
}
