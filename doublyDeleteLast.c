#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *prev;
    int data;
    struct node *next;
} *new, *temp, *head;


void displayNode(){
    temp = head;
    while(temp!=NULL){
        printf("%d<->", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

void deleteAtLast(){
    struct node *d;
    temp = head;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    d = temp->next;
    printf("\nDeleted node: %d", d->data);
    temp->next = NULL;
    d->prev = NULL;
    free(d);

    printf("\nList after modifying: \n");
    displayNode();
    
}



int main(){
    int value;
    char ch;
    do{
        new = (struct node*)malloc(sizeof(struct node));
        new->prev = NULL;
        printf("Enter a value: ");
        scanf("%d", &value);
        new->data = value;
        new->next = NULL;

        if(head==NULL){
            head = new;
            temp = new;
        }
        else{
            temp->next = new;
            new->prev = temp;
            temp = temp->next;
        }
        printf("Do you want to continue: (y/n)");
        scanf(" %c", &ch);
    }while(ch=='y');

    printf("\nList before updataing: \n");
    displayNode();

    
    deleteAtLast();
    return 0;
}