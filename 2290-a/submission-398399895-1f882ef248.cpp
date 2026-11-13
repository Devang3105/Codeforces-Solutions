#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    vector<int> a(3);

    for(int i=0; i<3; i++) cin >> a[i];

    sort(begin(a),end(a));

    if(a[1]-a[0]==1 && a[2]-a[1]==1){
        cout << "YES\n";
    }else{
        cout << "NO\n";
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