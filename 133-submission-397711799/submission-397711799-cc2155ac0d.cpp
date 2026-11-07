#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    string s; cin >> s;
    int cnt=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
            cnt++;
        }
    }
    (cnt>0)?cout<<"YES\n":cout<<"NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}