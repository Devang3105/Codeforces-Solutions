#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    string s; cin >> s;
    int z;
    int a;
    for(int i=0; i<s.size(); i++){
        z = (9-(s[i]-'0'));
        if(i==0 && z==0){
            continue;
        }
        s[i] = '0' + min((s[i]-'0'),z);
    }
    cout << s << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}