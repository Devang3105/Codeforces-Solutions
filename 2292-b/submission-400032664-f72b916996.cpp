#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n, k, p;
    cin >> n >> k >> p;
    vector<ll> a(n);

    for(ll i=0; i<n; i++) cin >> a[i];
    
    sort(begin(a),end(a));

    ll ans=0, sum=0;
    ll cnt=0;

    for(ll i=0; i<n; i++){
        sum+=a[i];
        cnt++;

        if(cnt==k){
            ans += max(sum,p);
            sum=0;
            cnt=0;
        }
    }

    ans+=sum;

    cout << ans << endl;
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