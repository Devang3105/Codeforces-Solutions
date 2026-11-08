#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void solve() {
    int n; cin >> n;
    vector<ll> a(n);
 
    for(int i=0; i<n; i++){
        int x; cin >> x;
        a[i] = (1LL << x);
    }
    sort(begin(a),end(a),greater<int>());
 
    ll x=0, y=0;
 
    for(int i=0; i<n; i++){
        if(x<=y){
            x+=a[i];
        }else{
            y+=a[i];
        }
    }
 
    cout << x*y << endl;
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
 
//16,4,4,2,1,1==16*12=192
//