#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    cout << n - max(a, n-b-1) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}