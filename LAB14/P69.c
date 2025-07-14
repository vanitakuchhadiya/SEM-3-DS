#include <stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};
struct node*first=NULL;
struct node*last=NULL;

void insertFirst(int x){
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    newNode->info=x;
    if(first==NULL){
        first=newNode;
        last=newNode;
        last->link=newNode;
        return;
    }

    last->link=newNode;
    newNode->link=first;
    first=newNode;
}
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
void deleteAtPosition(int pos){
    if (pos==1){
        struct node *save=first;
        first=first->link;
        last->link=first;
        free(save);
    }
    int count=1;
    struct node *pre=NULL;
    struct node *curr=first;
    if(count<pos&&curr->link!=first){
        pre=curr;
        curr=curr->link;
        pre->link=curr->link;
        free(curr);

    }
    if(curr==last){
        last=pre;
        pre->link=first;
        free(curr);
        return;
    }
    
}
void display(){
    if(first == NULL){
        printf("Empty linked list\n");
        return;
    }
    struct node* save = first;
    do {
        printf("%d", save->info);
        save = save->link;
        if (save != first)
            printf(" -> ");
    } while (save != first);
    printf("\n");
}

int main(){
    insertFirst(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);

    printf("Circular Linked List: ");
    display();
    
    deleteAtPosition(20);
    printf("After delete Node: ");
    display();
}