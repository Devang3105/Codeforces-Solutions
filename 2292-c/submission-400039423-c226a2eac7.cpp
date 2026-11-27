#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool ok = false;
    for(int i=0; i<n-1; i++){
        if(s[i]==s[i+1]){
            ok = true;
            break;
        }
    }

    if(n%2==0 && ok){
        cout << "YES\n";
    }else{
        cout << "NO\n";
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