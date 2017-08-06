#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    int a,b,c;
    while(cin>>a && cin>> b && a!=0 && b!=0){
       int sum=0;
       for(int i=0;i<a;++i){
          cin>> c;
          sum+=c;
       }
       cout<<b/sum<<endl;
    }
    return 0;
}
