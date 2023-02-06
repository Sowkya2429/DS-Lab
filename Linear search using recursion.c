#include<stdio.h>
int main(){
    int i,value,pos,n,arr[100];
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter value to search:\n");
    scanf("%d",&value);
    pos = recursion(arr,value,0,n);
    if(pos != 0){
        printf("element is found at %d",pos);
    }
    else{
        printf("element not found");
    }
    return 0;
}
int recursion(int arr[],int value,int index,int n){
    int pos = 0;
    if(index >= n){
        return 0;
    }
    else if(arr[index] == value){
        pos = index + 1;
        return pos;
    }
    else{
        return recursion(arr,value,index + 1,n);
    }
    return pos;
}