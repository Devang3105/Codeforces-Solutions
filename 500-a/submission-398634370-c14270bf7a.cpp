#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n, z; cin >> n >> z;
    vector<ll> a(n+1);
    for(ll i=1; i<n; i++) cin >> a[i];

    int i=1;

    while(i<z){
        i+=a[i];
    }

    if(i==z){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}