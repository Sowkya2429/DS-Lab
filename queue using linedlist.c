#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*front = NULL,*rear = NULL;
void enqueue(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   newNode -> next = NULL;
   if(front == NULL)
      front = rear = newNode;
   else{
      rear -> next = newNode;
      rear = newNode;
   }
   printf("\nInsertion is Success!!!\n");
}
void dequeue()
{
   if(front == NULL)
      printf("\nQueue is Empty!!!\n");
   else{
      struct Node *temp = front;
      front = front -> next;
      printf("\nDeleted element: %d\n", temp->data);
      free(temp);
   }
}
void display()
{
   if(front == NULL)
      printf("\nQueue is Empty!!!\n");
   else{
      struct Node *temp = front;
      while(temp->next != NULL){
	 printf("%d--->",temp->data);
	 temp = temp -> next;
      }
      printf("%d--->NULL\n",temp->data);
   }
}
int main(){
    int choice,value;
    while(1){
        printf("choose an option from below\n");
        printf("1.enqueue\n2.dequeue\n3.display elements\n4.exit\n");
        printf("Enter your option:\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter the value to insert:\n");
                scanf("%d",&value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                printf("Element is popped");
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Enter correct choice");
        }
    }
    return 0;
}