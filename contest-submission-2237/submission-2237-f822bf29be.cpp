#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    ll ans=0;
    for(ll i=0; i<n; i++) cin >> a[i];
    for(ll i=0; i<n; i++){
        if(ans>a[i]){
            ans+=a[i];
        }else{
            ans=a[i];
        }
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}