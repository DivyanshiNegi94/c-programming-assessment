#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter the size of array:\n");
    if(scanf("%d",&n) != 1 || n<=0){
    printf("Invalid\n");
    return 1;
}
int arr[n];
    printf("enter %d array elements :\n",n);
     for (i=0; i<n; i++){
    scanf("%d",&arr[i]);
     }
     int largest=arr[0],smallest=arr[0];
    for (i=0; i<n; i++){
       if (arr[i]>largest){
        largest=arr[i];
       }else if (arr[i]< smallest){
        smallest=arr[i];
       }sum+=arr[i];
    }printf("Largest=%d\n",largest);
    printf("Smallest=%d\n",smallest);
    printf("Sum=%d\n",sum);
    return 0;
}