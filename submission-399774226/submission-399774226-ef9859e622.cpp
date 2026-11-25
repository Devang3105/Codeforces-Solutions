#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void solve() {
    int n; cin >> n;
    vector<int> a;
    for(int i=0; i<n; i++){
        int h, m;
        cin >> h >> m;
        a.push_back(h*60 + m);
    }
    int cnt=1, ans=1;
    for(int i=1; i<n; i++){
        if(a[i]==a[i-1]){
            cnt++;
        }else{
            cnt=1;
        }
 
        ans = max(cnt, ans);
    }
 
    cout << ans << endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t=1;
    while (t--) {
        solve();
    }
 
    return 0;
}