#include<stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue(int ele){
    if(rear==N-1){
        printf("Queue is full");
    }else{
        rear++;
        queue[rear] = ele;
        if(front==-1){
            front = 0;
        }
    }
}


void dequeue(){
    if(front==-1 && rear==-1){
        printf("\nThe queue is empty");
    }else if(front==rear){
        printf("\nThe deleted element is: %d",queue[front]);
        front = -1;
        rear = -1;
    }else{
        printf("\nThe deleted element is: %d",queue[front]);
        front++;
    }
}


void display(){
    if(front==-1&&rear==-1){
        printf("\nThe queue is empty");
    }else{
        printf("\nThe elements are: ");
        for(int i=front; i<=rear; i++){
            printf("%d", queue[i]);
        }
    }
}

int main(){
    int op,ele;
    do{
        printf("\n1:Enqueue\n2:Dequeue\n3:Display\n0:Exit\n");
        printf("Enter your option: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("Enter a value: ");
            scanf("%d", &ele);
            enqueue(ele);
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