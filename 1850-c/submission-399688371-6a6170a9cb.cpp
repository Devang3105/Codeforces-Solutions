#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    char a[8][8];

    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            cin >> a[i][j];
        }
    }
    string ans = "";
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(a[i][j]>='a' && a[i][j]<='z'){
                ans+=a[i][j];
            }
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