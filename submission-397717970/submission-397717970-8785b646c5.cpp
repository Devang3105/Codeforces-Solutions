#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void solve() {
    ll s, n; cin >> s >> n;
    vector<ll> a(n);
 
    for(ll i=0; i<n; i++) cin >> a[i];
 
    sort(begin(a),end(a));//5 7 10 10 12 22
    ll mn=LLONG_MAX; 
    ll curr = 0;
    for(ll i=0; i<=n-s; i++){
        mn=min(mn,a[i+s-1]-a[i]);
    }
 
    cout << mn << endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}