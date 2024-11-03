#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}; 
struct node *top;

void push(int value){
    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->data = value;
    new->next = top;
    top = new;
}

void pop(int deleted){
    struct node *temp;
    temp = top;
    if(top == NULL ){
        printf("The stack is empty.");
    }else{
        deleted = top->data;
        top = top->next;
        printf("The deleted element is : %d",deleted);
        free(temp);
    }
}


void peek(){
    if(top==NULL){
        printf("The stack is empty.");
    }else{
        printf("The top element is: %d", top->data);
    }
}


void display(){
    if(top == NULL){
        printf("The stack is empty.");
    }else{
        printf("\nThe stack is: ");
        struct node *temp;
        temp = top;
        while(temp!=NULL){
            printf("%d->",temp->data);
            temp = temp->next;
        }
        printf("NULL");
    }
}



int main()
{
    int op,value,deleted;
    do{
        printf("Enter your option: \n");
        printf("\n1:Push\n2:Pop\n3:Peek\n4:Display");
        scanf("%d", &op);
        switch (op)
        {
            case 1:
                printf("\nEnter the value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop(deleted);
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
        default:
            break;
        }
    }while(op!=0);
    return 0;
}