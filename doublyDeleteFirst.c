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


void deleteAtFirst(){
    temp = head;
    int deleted =  head->data;
    printf("\nDeleted node: %d", deleted);
    head = head->next;
    head->prev = NULL;
    temp->next = NULL;
    free(temp);
    printf("\n");

    printf("\nList after updataing: \n");
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

    
    deleteAtFirst();
    return 0;
}