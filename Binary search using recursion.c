#include<stdio.h>
int recursive(int a[],int low,int high,int key){
    int mid;
    if(low > high){
        printf("key does not exist");
        return 0;
    }
    mid = (low + high)/2; 
    if(key > a[mid]){
        recursive(a,mid + 1,high,key);
    }
    else if(a[mid] == key){
        printf("key is found at position %d",mid + 1);
    }
    else{
        recursive(a,low,mid - 1,key);
    }
}
int main(){
    int i,n,key,a[100],high,mid,low;
    printf("Enter array size:\n");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter key value:\n");
    scanf("%d",&key);
    recursive(a,0,n-1,key);
    return 0;
}