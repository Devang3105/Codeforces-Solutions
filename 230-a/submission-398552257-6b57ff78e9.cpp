#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll s, n; cin >> s >> n;
    vector<pair<ll,ll>> p(n);

    for(ll i=0; i<n; i++){
        cin >> p[i].first >> p[i].second;
    }
    sort(begin(p),end(p));
    for(ll i=0; i<n; i++){
        if(s <= p[i].first){
            cout << "NO\n";
            return;
        }
        s+=p[i].second;
    }

    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}