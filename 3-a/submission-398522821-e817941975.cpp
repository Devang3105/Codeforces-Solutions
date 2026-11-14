#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    string s, t;
    cin >> s >> t;

    int dx = t[0]-s[0];
    int dy = t[1]-s[1];

    int z = max(abs(dx), abs(dy));

    cout << z << endl;

    while(dx!=0 || dy!= 0){
        string move = "";

        if(dx>0){
            move+='R';
            dx--;
        }else if(dx<0){
            move+='L';
            dx++;
        }

        if(dy>0){
            move+='U';
            dy--;
        }else if(dy<0){
            move+='D';
            dy++;
        }

        cout << move << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}