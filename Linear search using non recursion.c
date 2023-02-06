//linear search
#include<stdio.h>
int main(){
    int a[100],i,n,key;
    printf("Enter number of elements in array:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter element to be searched:\n");
    scanf("%d",&key);
    for(i = 0;i < n;i++){
    if(a[i] == key){
        printf("position = %d",i + 1);
        break;
    }
    }
    if(i == n){
        printf("not found");
    }
    return 0;
}
