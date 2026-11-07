#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n, m;
    cin >> n >> m;
    ll sum=0;
    ll cnt=0;
    vector<int> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    sort(begin(a),end(a));
    for(ll i=0; i<n; i++){
        if(a[i]<0 && cnt<m){
            sum+=abs(a[i]);
            cnt++;
        }
    }
    cout << sum << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}