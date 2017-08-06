#include <iostream>
#include <vector>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int cont=0;
int main(){
    optimizar_io
    int a,c;
    cin>>a;
    tor:;
    int kok=0,p=0;
    vector<int> v(10);
    for(int i=0;i<10;i++){
        cin>>v[i];
        if(v[i]==17)kok=17;
        else if(v[i]==18)p=18;
    }
    for(int i=0;i<10;i++)cout<<v[i]<<" ";
    cout<<endl;
    if(kok==17 && p==18)cout<<"both"<<endl;
    else if(kok==17 && p==0)cout<<"zack"<<endl;
    else if(kok==0 && p==18)cout<<"mack"<<endl;
    else cout<<"none"<<endl;
    cont++;
    if(cont==a)goto fin;
    else goto tor;
    fin:;
    return 0;
}
