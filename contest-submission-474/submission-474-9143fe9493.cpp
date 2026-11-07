#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    for(int i=1; i<n; i++){
        a[i]+=a[i-1];
    }

    int m; cin >> m;
    while(m--){
        int x; cin >> x;
        int lb = lower_bound(begin(a),end(a),x) - begin(a);

        cout << lb+1 << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}