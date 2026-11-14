#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n, m, a;
    cin >> n >> m >> a;
    ll l = ceil((double)n/a);
    ll b = ceil((double)m/a);
    cout << l*b << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}