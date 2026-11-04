#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int cnt=0;
    int ans = n;
    for(int i=0; i<n; i++){
        cnt++;
        if(s[i]=='1'){
            ans = max(ans,(i+1)*2); 
            cnt++;
        }
    }
    ans = max(cnt,ans);
    reverse(begin(s),end(s));
    cnt=0;
    for(int i=0; i<n; i++){
        cnt++;
        if(s[i]=='1'){
            ans = max(ans,(i+1)*2); 
            cnt++;
        }
    }
    ans = max(cnt,ans);
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