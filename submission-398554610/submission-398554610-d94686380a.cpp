#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void solve() {
    ll n, m;
    cin >> n >> m;
    ll curr=1;
    ll ans=0;
    for(ll i=0; i<m; i++){
        ll x; cin >> x;
 
        if(x>=curr){
            ans+= x-curr;
        }else{
            ans+= (n-curr)+x;
        }
        curr=x;
    }
 
    cout << ans << endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}