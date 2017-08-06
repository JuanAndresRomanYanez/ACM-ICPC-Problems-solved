#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
  optimizar_io
  int a,aux,cont,tot,b;
  cin>> a;
  for(int i=0;i<a;i++){
      aux=cont=tot=0;
      while(cin>> b && b!=0){
          if(b>aux+aux)cont=b-(aux+aux),tot+=cont;
          aux=b;
      }
      cout<<tot-1<<"\n";
  }
}
