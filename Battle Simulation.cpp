#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    string a,pal="";
    cin>>a;
        for(int i=0;i<(int)a.size();++i){
            if(i+2<(int)a.size() &&
            ( (a[i]=='R' && a[i+1]=='B' && a[i+2]=='L')||
              (a[i]=='R' && a[i+1]=='L' && a[i+2]=='B')||
              (a[i]=='B' && a[i+1]=='L' && a[i+2]=='R')||
              (a[i]=='B' && a[i+1]=='R' && a[i+2]=='L')||
              (a[i]=='L' && a[i+1]=='B' && a[i+2]=='R')||
              (a[i]=='L' && a[i+1]=='R' && a[i+2]=='B'))
            ){
                pal+='C';
                i+=2;
            }
            else{
                    if(a[i]=='R')pal+='S';
                    if(a[i]=='B')pal+='K';
                    if(a[i]=='L')pal+='H';
            }
        }
    cout<<pal<<"\n";
}
