#include <stdio.h>
int main(){
    int a,x,sum;
    scanf("%i", &a);
    while(a--){
        sum=1;
        scanf("%i", &x);
        for(int i=2;i<=x/2;++i){
            if(x%i==0)sum+=i;
        }
        if(sum<x)printf("deficient\n");
        else if(sum==x)printf("perfect\n");
        else printf("abundant\n");
    }
}
