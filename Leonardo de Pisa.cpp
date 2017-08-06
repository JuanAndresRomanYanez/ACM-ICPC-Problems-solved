#include <iostream>
#include <vector>
#include <algorithm>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    optimizar_io;
    long a,b,x;
    while(cin>>a>>b){
    vector<long long>V;
    for(int i=0;i<b;++i){
            cin>>x;
            V.push_back(x);
    }
    sort(V.begin(),V.end());
    for(long long i=0;i<b-1;++i){
            if(V[i+1]>=V[i]){
                    if((V[i+1]-V[i])>2){
                        cout<<"N\n";goto kok;
                    }
                    if((V[i]==V[i+1] && i==b-2) || (V[i]==V[i+1] && b==3)){
                        cout<<"N\n";goto kok;
                    }
            }
    }
    cout<<"S\n";
    kok:;
  }
    return 0;
}
