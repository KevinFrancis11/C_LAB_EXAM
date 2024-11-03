#include<stdio.h>
#define N 5
int stack[N];
int top = -1;

void push(int ele){
    if(top==N-1){
        printf("The stack is full");
    }else{
        top++;
        stack[top] = ele;
    }
}

void pop(int value){
    if(top==-1){
        printf("The stack is empty.");
    }else{
        value = stack[top];
        top--;
        printf("\nThe deleted element is: %d",value);
    }
}


void peek(int value){
    if(top==-1){
        printf("Stack is empty.");
    }else{
        value = stack[top];
        printf("The element at the top is: %d", value);
    }
}

void display(int i){
    if(top==-1){
        printf("The stack is empty");
    }
    else{
        printf("\n The elements are: ");
        for(i=top; i>=0; i--){
            printf("%d ", stack[i]);
        }
    }
}



int main(){
    int op,ele,value,i;
    do{
        printf("\n1:Push\n2:Pop\n3:Peek\n4:Display\n0:exit");
        printf("\n\nEnter your option: ");
        scanf("%d", &op);
        switch(op){
            case 0:
                break;
            case 1:
                printf("Enter the element to be pushed: ");
                scanf("%d", &ele);
                push(ele);
                break;
            case 2:
                pop(value);
                break;
            case 3:
                peek(value);
                break;
            case 4: 
                display(i);
                break;
            default:
                printf("Enter a valid option!!!!");
                break;
        }

    }while(op!=0);
return 0;
}