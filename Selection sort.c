#include <stdio.h>
int main(){
int i, j,n, temp, arr[5];
printf("enter size of array:\n");
scanf("%d",&n);
printf("enter elements:");
for(int i = 0;i < n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<5;i++){
for(j=i+1;j<5;j++){
if(arr[i]< arr[j]){
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
printf("Sorted elements: ");
for(i=0;i<5;i++)
printf(" %d",arr[i]);
return 0;
}