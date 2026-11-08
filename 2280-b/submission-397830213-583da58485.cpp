#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n; cin >> n;
    int val;
    // cout << "?" << l << r << endl;
    cout << "? 1 " << n << endl;
    cin >> val;
    if(val==0 || val==n){
        cout << "! NO" << endl;
        return;
    }
    cout << "? 1 " << val << endl;
    int x; cin >> x;
    (x==val)?cout<<"! NO"<<endl:cout<<"! YES"<<endl;
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