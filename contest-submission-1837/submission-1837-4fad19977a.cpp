#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int cnt=1,ans=1;
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1]){
            cnt++;
        }else{
            cnt=1;
        }
        ans = max(cnt,ans);
    }
    cout << ans+1 << endl;
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