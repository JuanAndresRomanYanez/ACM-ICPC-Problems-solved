#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%i", &a);
    while(a--){
        scanf("%i%i%i%i%i", &b, &c, &d, &e, &f);
        if((b==1 && c==2 && d==3 && e==4 && f==5) || (b==2 && c==3 && d==4 && e==5 && f==6))printf("Y\n");
        else printf("N\n");
    }
}
