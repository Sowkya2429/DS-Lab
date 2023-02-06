#include<stdio.h>  
#include<stdlib.h>  
struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *start;  
void insert_at_beginning();   
void insert_at_last();  
void insert_at_pos();  
void delete_at_beginning();  
void delete_at_last();  
void delete_at_pos();  
void display();  
void main ()  
{  
    int choice = 0;  
    while(1)   
    {    
        printf("\nEnter the operation to be performed\n");    
        printf("\n1.Insert in the begining\n2.Insert at last\n3.Insert at any specified position\n4.Delete from Beginning\n5.Delete from last\n6.Delete node after specified location\n7.Show\n8.Exit\n");           
        scanf("\n%d",&choice);  
        switch(choice)  
        {        
            case 1:  
            insert_at_beginning();       
            break;  
            case 2:  
            insert_at_last();         
            break;  
            case 3:  
            insert_at_pos();       
            break;  
            case 4:  
            delete_at_beginning();       
            break;  
            case 5:  
            delete_at_last();        
            break;  
            case 6:  
            delete_at_pos();           
            break;  
            case 7:  
            display();        
            break;  
            case 8:
            printf("Exiting...");
            exit(0);  
            break;  
            default:  
            printf("Enter valid option");  
        }  
    }  
}           
void insert_at_beginning()
{
    struct node *p;  
    int value;  
    p=(struct node *) malloc(sizeof(struct node *));  
    if(p==NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else  
    {  
        printf("\nEnter value\n");    
        scanf("%d",&value);    
        p->data=value;  
        p->next=start;  
        start=p;  
    }  
}  
void insert_at_last()                
{  
    struct node *p,*temp;  
    int value;     
    p=(struct node*)malloc(sizeof(struct node));      
    if(p==NULL)  
    {  
        printf("\nOVERFLOW");     
    }  
    else  
    {  
        printf("\nEnter value\n");  
        scanf("%d",&value);  
        p->data=value;  
        if(start==NULL)  
        {  
            p->next=NULL;  
            start=p;  
        }  
        else  
        {  
            temp=start;  
            while(temp->next!=NULL)  
            {  
                temp=temp->next;  
            }  
            temp->next=p;  
            p->next=NULL;  
        }  
    }  
}  
void insert_at_pos()               
{  
    int i,pos,value;   
    struct node *p, *temp;  
    p=(struct node *)malloc(sizeof(struct node));  
    if(p==NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else  
    {  
        printf("\nEnter element value");  
        scanf("%d",&value);  
        p->data=value;  
        printf("\nEnter the location after which you want to insert ");  
        scanf("\n%d",&pos);  
        temp=start;  
        for(i=0;i<pos;i++)  
        {  
            temp=temp->next;  
            if(temp==NULL)  
            {  
                printf("\nElement cannot be inserted\n");  
                return;  
            }  
        }  
        p->next=temp->next;   
        temp->next=p; 
    }  
}  
void delete_at_beginning()     
{  
    struct node *p;  
    if(start==NULL)  
    {  
        printf("\nList is empty\n");  
    }  
    else   
    {  
        p=start;  
        start=p->next;  
        free(p);  
    }  
}  
void delete_at_last() 
{  
    struct node *p,*p1;  
    if(start==NULL)  
    {  
        printf("\nlist is empty");  
    }  
    else if(start->next==NULL)  
    {  
        start=NULL;  
        free(start);  
        printf("\nOnly node of the list deleted ...\n");  
    }  
    else  
    {  
        p=start;   
        while(p->next!=NULL)  
        {  
            p1=p;  
            p=p->next;  
        }  
        p1->next=NULL;  
        free(p);  
    }     
}  
void delete_at_pos()    
{  
    struct node *p,*p1;  
    int pos,i;    
    printf("\n Enter the location of the node after which you want to perform deletion \n");  
    scanf("%d",&pos);  
    p=start;  
    for(i=0;i<pos;i++)  
    {  
        p1=p;       
        p=p->next;  
           
        if(p==NULL)  
        {  
            printf("\nElement cannot be deleted");  
            return;  
        }  
    }  
    p1->next=p->next;  
    free(p);  
    printf("\nDeleted node %d ",pos+1);  
}  
void display()    
{  
    struct node *p;  
    p=start;   
    if(p==NULL)  
    {  
        printf("Nothing to print");  
    }  
    else  
    {  
        printf("\nprinting values\n");   
        while (p!=NULL)  
        {  
            printf("\n%d",p->data);  
            p=p->next;  
        }  
    }  
}     
