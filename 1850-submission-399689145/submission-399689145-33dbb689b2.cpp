#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    sort(begin(a),end(a));
    int cnt = 1;
    int ans = 1;
    for(int i=1; i<n; i++){
        if((a[i]-a[i-1] <= k)){
            cnt += 1;
        }else{
            cnt = 1;
        }

        ans = max(ans, cnt);
    }

    cout << n-ans << endl;
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