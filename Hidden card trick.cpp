#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    long long a,g,res,aux=0;
    while(cin>>a && a!=0){
            res=1;
            g=1;
            while(a>g){
                aux=g;
                g*=2;
            }
            if(g==a){goto kok;}
            else{
                for(long long i=aux;i<a;++i){
                    res+=2;
                }
            }
            kok:;
            cout<<res<<"\n";
    }
    return 0;
}
