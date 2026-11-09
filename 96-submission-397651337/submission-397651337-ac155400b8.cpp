#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    string s; cin >> s;
    int z=0, o=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='0'){
            z++; o=0;
        }else{
            o++; z=0;
        }

        if(o==7 || z==7){
            break;
        }
    }

    if(o==7||z==7){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    
    return 0;
}