#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int n, m, x, l;
int cv[200005];
bool dead[200005];
vector<vector<int> >g;
void dfs( int u ){
    dead[ u ] = true;
    for( int i = 0 ; i < (int)g[u].size() ; ++i ){
        if( !dead[ g[u][i] ] ){
            cv[ g[u][i] ]--;
            if( (int)g[ g[u][i] ].size() >= cv[g[u][i]]*2 ){
                dfs( g[u][i] );
            }
        }
    }
}
int main(){
    optimizar_io
    int s, f;
    cin >> n >> m >> x >> l;
    g.assign(n+5, vector<int>());
    for( int i = 0 ; i < m ; ++i ){
        cin >> s >> f;
        g[s].push_back(f);
        g[f].push_back(s);
        cv[s]++;
        cv[f]++;
    }
    dfs( l );
    if( !dead[x] ){
        cout << "stay" << endl;
    }else{
        cout << "leave" << endl;
    }
}
