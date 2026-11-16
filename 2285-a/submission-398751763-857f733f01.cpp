#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n; cin >> n;

    if(n==1||n==2||n==3){
        cout << -1 << endl;
    }else{
        cout << "4 3 2 1";
        for(int i=5; i<=n; i++) cout << " " << i;
        cout << endl;
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