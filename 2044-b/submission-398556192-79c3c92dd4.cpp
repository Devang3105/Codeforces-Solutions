#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    string s; cin >> s;
    string z = "";

    for(int i=0; i<s.size(); i++){
        z+=s[s.size()-i-1];
    }

    for(int i=0; i<z.size(); i++){
        if(z[i]=='p'){
            z[i]='q';
        }else if(z[i]=='q'){
            z[i]='p';
        }
    }

    cout << z << endl;
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