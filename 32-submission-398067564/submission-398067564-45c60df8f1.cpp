#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n, d; cin >> n >> d;
    vector<ll> a(n);
    ll cnt=0;
    for(ll i=0; i<n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++) {
        for(ll j = i + 1; j < n; j++) {
            if(abs(a[i] - a[j]) <= d) {
                cnt += 2;
            }
        }
    }
    cout << cnt << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}