#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n; cin>>n;
    int ans=0;
    int int_b = 0;
    for(int i=1; i<=n; i++){
        int a, b;
        cin >> a >> b;
        if(a<=10 && b>int_b){
            ans = i;
            int_b = b;
        }
    }

    cout << ans << endl;
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