#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n,m;cin>>n>>m;

    string p,q;
    cin>>p>>q;

    q+="six";

    vector<int> f(26,0),s(26,0);
    for(auto &i : p) f[i-'a']++;
    for(auto &i : q) s[i-'a']++;

    if(f==s){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
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

//second waale me pehla add krke dono ka vector check kre toh ho jayega shyd