#include <stdio.h>
int main() {
    int n,i;
    if (scanf("%d",&n) != 1 || n<=0) {
        return 0;
    }
long long first=0,second=1,next;
for (i=0; i<n; i++) {
        if (i==0) {
            printf("%lld",first);
        }else if (i==1) {
            printf(" %lld",second);
        }else{
            next=first+second;
            first=second;
            second=next;
            printf(" %lld",next);
        }
    } return 0;
} 