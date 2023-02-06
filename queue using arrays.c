#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int rear = -1,front = -1,queue[MAX];
void enqueue();
void dequeue();
void display();
int main(){
    int choice,value;
    while(choice != 4){
        printf("Select an option from below:\n");
        printf("1.enqueue\n2.dequeue\n3.display\n4.exit\n");
        printf("Enter your choice:\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                enqueue();
                printf("Enter value to insert:\n");
                scanf("%d",&value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Enter correct choice\n");
        }
    }
}
void enqueue(){
    int value;
    if(rear == MAX - 1){
        printf("queue overflow");
    }
    else{
        if(front == -1){
            front = 0;
        }
        else{
            rear = rear + 1;
            queue[rear] = value;
        }
    }
}
void dequeue(){
    if(front == -1){
        printf("queue is empty");
    }
    else{
        printf("popped element is %d\n",queue[front]);
        front = front + 1;
    }
}
void display(){
    int i;
    if(front == -1){
        printf("queue is empty");
    }
    else{
        printf("queue is ");
        for(i = front;i <= rear;i++){
            printf("%d\n",queue[i]);
        }
    }
}