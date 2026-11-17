#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, r, b;
    cin >> n >> r >> b;
    string ans = "";

    int red = r / (b+1);
    int extra = r % (b+1);

    for(int times=1; times<=(b+1); times++){
        for(int i=0; i<red; i++){
            ans+='R';
        }
        if(extra>0){
            ans+='R';
            extra--;
        }
        if(times!=(b+1)){
            ans+='B';
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