#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node* head = NULL;
struct node* last = NULL;

//function to craete a node
struct node* createNode(int val){
    struct node* new = (struct node*)malloc(sizeof(struct node));
    new->data = val;
    new->next = NULL;
    return new;
}


//function to create a list
struct node* createList(int val){
    struct node* new = createNode(val);
    if(head==NULL){
        head = new;
    }
    else{
        last->next = new;
    }
    last = new;
    return head;
}


//function to display the list
void displayList(struct node* temp){
    while(temp!=NULL){
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}




int main(){
    int value;
    char ch;
    int choice;
    do{
        printf("\n1)Create list");
        printf("\n2)Display list");
        printf("\nEnter your oprtion: ");
        scanf("%d", &choice);
        switch(choice){
            case 1: 
                for(int i = 1; i<4; i++){
                    printf("Enter the value: ");
                    scanf("%d", &value);
                    head = createList(value);
                }
                break;
            case 2:
                printf("\nThe list is.......\n");
                displayList(head);
                break;
            default:
                break;
                
        }
        printf("\nDo you want to continue(y/n): ");
        scanf(" %c", &ch);

    }while(ch=='y' || ch=='Y');
    return 0;
}