#include <iostream>
#include <vector>
#include <algorithm>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main() {
    optimizar_io
    int a,cont=0;
    cin >> a;
    string cad,p;
    vector< pair <string,string > > v(a);
    for(int i=0;i<a;i++){
        cin>>cad >> p;
        v[i].first=p;
        v[i].second=cad;

    }
    sort(v.begin(),v.end());
    for(int i=0;i<a;++i){
        cout<<v[i].second<< " "<<v[i].first<<"\n";
    }
    return 0;
}
