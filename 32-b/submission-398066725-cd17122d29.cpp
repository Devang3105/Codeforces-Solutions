#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    string s; cin >> s;
    
    for(int i=0; i<s.size(); i++){
        if(s[i] == '.'){
            cout << '0';
        }else{
            if(s[i+1] == '.'){
            cout << '1';
            }else{
                cout << '2';
            }
            i++;
        }
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}