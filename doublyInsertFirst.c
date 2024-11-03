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


// insert at the first
void insertAtFirst(int newValue){
     new = (struct node*)malloc(sizeof(struct node));
    new->prev = NULL;
    printf("\nEnter a value to insert at the begining of the list: ");
    scanf("%d", &newValue);
    new->data = newValue;
    new->next = head;
    head = new;
    
    printf("\nThe list after modifying.\n"); 
    displayNode();
}



int main(){
    int value;
    int newValue;
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



    //insert at the first
    insertAtFirst(newValue);
    
    return 0;
}
