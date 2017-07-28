#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    int a,x,y,val,aux,auxi;
    string s;
    cin>>a;
    while(a--){
        cin>>x>>y;
        map<string,int>kok;
        vector<string>pos(x);
        priority_queue< pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >lol;
        for(int j=0;j<x;++j){
                cin>>s>>val;
                kok[s]=val;
                pos[j]=s;
                lol.push(make_pair(val,j));
        }
        for(int i=0;i<y;++i){
            auxi=(lol.top()).second;
            cout<<(lol.top()).first<<" "<<pos[auxi]<<"\n";
            aux=(lol.top()).first;
            lol.pop();
            s=pos[auxi];
            lol.push(make_pair(aux+kok[s],auxi));
        }
    }
    return 0;
}
