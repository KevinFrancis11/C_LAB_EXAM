#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *prev;
    int data;
    struct  node *next;
} *new, *temp, *head;


void displayNode(){
    temp = head;
    while(temp!=NULL){
        printf("%d<->", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

void insertAtAny(){
    int newValue=0;
    int pos=0;
    printf("\nEnter the posiont to insert: ");
    scanf("%d", &pos);
    printf("\nEnter the value to insert: ");
    scanf("%d", &newValue);
    temp = head;
    for(int i=0; i<pos-1; i++){
        temp = temp->next;
    }
    new = (struct node*)malloc(sizeof(struct node));
    new->next = temp->next;
    temp->next->prev = new;
    temp->next = new;
    new->prev = temp;
    new->data = newValue;

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
    }while(ch == 'y');

    printf("\nThe list before modifying.\n");
    displayNode();



    //insert at the any position
    insertAtAny();
    
    return 0;
}