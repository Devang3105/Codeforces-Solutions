#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    string s; cin >> s;
    string t = "hello";
    int j=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]==t[j]){
            j++;
        }

        if(j==5) break;
    }
    (j==5)?cout<<"YES\n":cout<<"NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}