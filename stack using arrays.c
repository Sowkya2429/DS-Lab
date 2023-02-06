#include<stdio.h>
int i,n,choice = 0,a[100],top = -1;
void push();
void pop();
void display();
int main(){
    printf("Enter the numbers in stack:\n");
    scanf("%d",&n);
    while(choice != 4){
        printf("Select an option from below:\n");
        printf("1.push\n2.pop\n3.display\nexit\n");
        printf("Enter choice:\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...");
                break;
            default:
                printf("Enter correct value");
        }
    }
    return 0;
}
void push(){
    int value;
    if(i == n){
        printf("stack overflow");
    }
    else{
        printf("Enter the value:\n");
        scanf("%d",&value);
        top = top + 1;
        a[top] = value;
    }
}
void pop(){
    if(top == -1){
        printf("stack underflow");
    }
    else{
        top = top - 1;
    }
    printf("element popped\n");
}
void display(){
    for(i = top;i >= 0;i--){
        printf("Elements are:\n");
        printf("%d\n",a[i]);
    }
    if(top == -1){
        printf("stack is empty");
    }
}
