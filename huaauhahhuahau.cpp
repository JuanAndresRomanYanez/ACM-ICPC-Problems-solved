#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    string cad,b,cad2,cad3="aeiou",cad4;
    cin>>cad;
    int cont=0;
    for(int i=0;i<cad.length();i++) if(cad3.find(cad[i])<cad3.length())cad2.push_back(cad[i]);
    cad4=cad2;
    reverse(cad2.begin(),cad2.end());
    if(cad2==cad4)cout<<"S\n";
    else cout<<"N\n";
    return 0;
}
