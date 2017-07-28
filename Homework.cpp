#include <stdio.h>
int main()
{
    int a,x,in,f,cont=3;
    int v[10000];
    v[0]=3;
    for(int i=1;i<9999;++i){
        v[i]=v[i-1]+cont;
        cont++;
    }
    scanf("%i", &a);
    while(a--){
        scanf("%i", &x);
        in=0,f=9998;
        while(in<=f){
            int mid=(in+f)/2;
            if(v[mid]==x){
                printf("%i\n", mid+1);
                goto kok;
            }
            if(v[mid]>x)f=mid-1;
            else in=mid+1;
        }
        printf("No solution\n");
        kok:;
    }
}
