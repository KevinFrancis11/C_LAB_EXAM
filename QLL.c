#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next; 
};

struct node *front;
struct node *new;
struct node *rear;
struct node *temp;


void enqueue(int value){
    new = (struct node*)malloc(sizeof(struct node));
    new->data = value;
    new->next = NULL;
    if(front==NULL && rear==NULL){
        front = new;
        rear = new;
    }
    else{
        rear->next=new;
        rear = new;
    }
}


void dequeue(){
    if(front==NULL && rear==NULL){
        printf("\nThe queue is empty.");
    }else{
        temp = front;
        printf("Deleted node is: %d",front->data);
        front = front->next;
        temp->next=NULL;
        free(temp);
    }
}


void display(){
    if(front==NULL && rear==NULL){
        printf("\nThe queue is empty.");
    }else{
        temp = front;
        while(temp!=NULL){
            printf("%d->", temp->data);
            temp = temp->next;
        }
    }
}

int main(){
    int op,value;
    do{
        printf("\n1:Enqueue\n2:Dequeue\n3:Display\n");
        printf("Enter your option: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1: 
            printf("\nEnte a value: ");
            scanf("%d", &value);
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        default:
            break;
        }

    }while(op!=0);
    return 0;
}