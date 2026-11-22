#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int x, y;
    cin >> x >> y;

    (x%y==0)?cout<<"YES\n":cout<<"NO\n";
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