#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a ,b,c;
    cin>> a;
    vector<int> v(3),k(3);
    bool none=false,co=false,cou=false;
    while(a--){
        for(int i=0;i<(int)v.size();i++){
            cin>> b;
            v[i]=b;
        }
        for(int i=0;i<(int)k.size();i++){
            cin>> c;
            k[i]=c;
        }
        for(int i=0;i<(int)v.size();i++)cout<<v[i]<<" ";
        for(int i=0;i<(int)k.size();i++)cout<<k[i]<<" ";
        cout<<"\n";
        if(v[0]+v[1]+v[2]> k[0]+k[1]+k[2])cou=true;
        if(v[0]>k[0])co=true;
        else{
            if(v[0]==k[0])
                {
                    if(v[1]>k[1])co=true;
                    else if(v[1]==k[1] && v[2]>k[2])co=true;
                    else none=true;
                }
                else none=true;
        }
        if(cou==true && co==true)cout<<"both\n";
        else if(cou==true)cout<<"count"<<endl;
        else if(co==true)cout<<"color"<<endl;
        else cout<<"none"<<endl;
        co=cou=none=false;
    }
    return 0;
}
