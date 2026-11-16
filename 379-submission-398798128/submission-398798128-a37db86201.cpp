#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, z; cin >> n >> z;
    int ans = n;

    while(n>=z){
        ans+=(n/z);
        n = (n/z) + (n%z);
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}