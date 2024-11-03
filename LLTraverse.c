#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head;
struct node *new;
struct node *temp;

void main(){
    int value = 0;
    char ch;
 
    do{
        new = (struct node*)malloc(sizeof(struct node));
        printf("Enter the value: ");
        scanf("%d", &value);
        new->data = value;
        new->next = NULL;
        if(head==NULL){
            head = new;
            temp = new;
        }
        else{
            temp->next = new;
            temp = new; //or temp = temp->next; 
        }
        printf("Do you want to continue: (y/n)");
        scanf(" %c", &ch);
    }
    while(ch == 'y');

    printf("The list is : ");
    temp = head;
    while(temp!=NULL){
        printf("%d->", temp->data);
        temp = temp->next;
        if(temp==NULL){
            printf("NULL");
        }
    }

   
}