#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    long long n,ans=1; cin>> n;
    set<long long> st;
    for(long long i=2;i*i<=n;++i){
        while(n%i==0){
            n/=i;
            st.insert(i);

        }

    }
    if(n>1)st.insert(n);
    if(st.size()==1)cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    return 0;
}
