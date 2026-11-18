#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    int ans = n;
    for(int i=0; i<n; i++){
        if(a[i]!=0 && a[i]<=k){
            ans = min(ans, abs((i+1)-m));
        }
    }

    cout << ans*10 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}