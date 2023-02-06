#include<stdio.h>
int main(){
    int i,n,low,high,mid,key,a[100];
    printf("Enter array size:\n");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter key element:\n");
    scanf("%d",&key);
    low = 0;
    high = n - 1;
    mid = (low + high)/2;
    while(low <= high){
        if(a[mid] < key){
            low = mid + 1;
        }
        else if(a[mid] == key){
            printf("key is found at %d",mid + 1);
            break;
        }
    else{
        high = mid - 1;
        mid = (low + high)/2;
    }
    }
    if(low > high){
        printf("key does not exist");
    }
}
