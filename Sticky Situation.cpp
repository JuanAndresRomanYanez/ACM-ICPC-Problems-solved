#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    long long n; cin >> n;
    vector<long long>v(n);
    for( long long i = 0 ; i < n ; ++i ){
        cin >> v[i];
    }
    bool ok = false;
    sort( v.rbegin(), v.rend() );
    for( long long i = 0 ; i <= n-3LL ; ++i ){
        if( v[i]-v[i+1LL] < v[i+2LL] ){
            ok = true;
        }
    }
    if( ok ) cout << "possible" << endl;
    else cout << "impossible" << endl;
}
