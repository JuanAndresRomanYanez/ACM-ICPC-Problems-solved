#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    optimizar_io
    int x;
    double a,cont,aux,auxi;
    cin>>a;
    for(int i=0;i<a;++i){
        cin>>x;
        auxi=x;
        aux=x;
        int cont=0;
        vector<double>v;
        for(int j=2;j*j<=x;++j){
            if(x%j==0){
                while(x%j==0){
                    x/=j;
                }
                v.push_back(j);
            }
        }
        if(x>1){v.push_back(x);}
        for(int k=0;k<(int)v.size();++k){
            aux=aux*(1-(1/v[k]));
        }
        cout<<(int)aux<<" "<<fixed<<setprecision(4)<<(double)(aux*(auxi/2))/auxi<<"\n";
    }
    return 0;
}
