#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    string s; cin >> s;
    string t;
    bool yes = true;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            i+=2;
        }else{
            t+=s[i];
            if(s[i+1]=='W' && s[i+2]=='U' && s[i+3]=='B'){
                t+=' ';
            }
        }
    }
    cout << t << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}