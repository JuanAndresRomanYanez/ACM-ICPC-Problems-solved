#include <stdio.h>
#include <set>
int main(){
    long long a,x,k,res=0;
    scanf("%lld", &a);
    while(a--){
            scanf("%lld", &x);
            std::set<long long>po;
            while(x--){
                scanf("%lld", &k);
                po.insert(k);
            }
            printf("%lld\n", ((long long)po.size())-1);
    }
}
