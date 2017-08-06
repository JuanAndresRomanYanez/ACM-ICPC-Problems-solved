#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    int a,b,c;
    cin>> a;
    string lol="abcdefghijklmnopqrstuvwxyz";
    map<char,int> mp;
    for(int i=0;i<lol.size();++i){
       mp[lol[i]]=i;
    }
    string cad;
    for(int i=0;i<a;++i){
       cin>> cad >> b;
       int lis[cad.size()];
       int mi=0,ma=0,ko=0;
       for(int s=0;s< cad.size();++s){
           int ma=0,ko=0;
           for(int j=0; j<s; ++j){
            if((mp[cad[j]]+b)%26<=mp[cad[s]]){
                ma=max(ma,lis[j]);
             }
           }
           lis[s]=ma+1;
           mi=max(mi,lis[s]);
       }
       cout<<mi<<endl;
    }
    return 0;
}
