#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, q; cin >> n >> q;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(begin(a),end(a),greater<int>()); // 9 5 4 4 3 3 1 1 
    for(int i=1; i<n; i++){
        a[i]+=a[i-1];
    }
    while(q--){
        int x; cin >> x;
        int lb = lower_bound(begin(a),end(a),x) - a.begin();
        lb+=1;
        if(lb>n){
            cout << -1 << endl;
        }else{
            cout << lb << endl;
        }
    }
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