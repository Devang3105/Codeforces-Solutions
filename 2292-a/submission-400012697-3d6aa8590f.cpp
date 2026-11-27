#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    int x = n/__gcd(n,a);
    int y = n/__gcd(n,b);

    cout << __gcd(x,y) << endl;
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