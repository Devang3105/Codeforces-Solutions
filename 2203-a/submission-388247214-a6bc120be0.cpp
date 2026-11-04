#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf -1e8

void solve(){
ll n,m,d;
cin >> n >> m >> d;
ll k_max = ( d / m ) + 1;
ll ans = ( n + k_max - 1 ) / k_max;
cout << ans << endl;
}
int main(){


    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}