#include <iostream>
#include <vector>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    int a,b,c,mi=0;
    cin>> a;
    for(int i=0;i<a;i++){
       cin>> b >> c;
       int te=b,ans=0;
       vector<int> v(b);
       for(int i=0;i<b;++i){
          cin>> v[i];
          ans+=v[i];
       }
       for(int i=0; ;++i){
          if(ans%c==0){
            cout<<"Yes."<<endl;
            goto poti;
          }
          ans+=v[i%te];
       }
       poti:;
    }
    return 0;
}
