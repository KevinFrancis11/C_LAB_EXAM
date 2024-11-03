#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
}*new, *temp, *head;

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

        if(head == NULL){
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

    temp = head;
    while(temp!=NULL){
        printf("%d<->",temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}
