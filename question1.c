#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter an INTEGER:\n");
    if(scanf("%d",&n) !=1 || n<=0){
        printf("invalid\n");
        return 1;
    }
    if(n%2==0){
        printf("Even\n");
    } else{
        printf("Odd\n");
    }
    for(i=1; i<=n; i++){
        sum+=i;
    }
        printf("Sum=%d\n",sum);
    return 0;
}