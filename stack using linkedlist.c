#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node* top = NULL;
void push(int value)
{
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    if(top == NULL){
        newNode -> next = NULL;
    }
    newNode->next = top;
    top = newNode;
}

void pop()
{
    if(top == NULL)
        printf("Stack is Empty\n");
    else
    {
        printf("Poped element = %d\n", top->data);
        top = top->next;
    }
}
void display()
{
    while(top != NULL)
    {
         printf("%d->", top->data);
         top = top->next;
    }
    printf("NULL\n");
}
int main(){
    int choice,value;
    printf("Implementation of stack linked list\n");
    while(1){
        printf("Choose an option from below\n");
        printf("1.push\n2.pop\n3.display\n4.exit\n");
        printf("Enter your option:\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter a value to insert:\n");
                scanf("%d",&value);
                push(value);
                break;
            case 2:
                pop();
                printf("Element is popped\n");
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Enter correct choice\n");
        }
    }
    return 0;
}
