#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll m, a, b, c;
    cin >> m >> a >> b >> c;
    ll ans=0;
    
    ans+=min(a,m);
    ans+=min(b,m);

    ll rem = 2*m - ans;

    ans += min(c,rem);

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

// m in first row..(m<=a)  ans+=a
// m in second row..(m<=b)  ans+==b
// if(2*m - ans) ans+remaing seat