#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int x; cin >> x;
    cout << (x/2)*(x-(x/2)) << endl;
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