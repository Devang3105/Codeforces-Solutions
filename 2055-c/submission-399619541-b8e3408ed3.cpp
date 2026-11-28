#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m; cin >> n >> m;
    string s; cin >> s;
    int a[n][m];
    int rs[n] = {0}, cs[m] = {0};
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
            rs[i] += a[i][j];
            cs[j] += a[i][j];
        }
    
    int x = 0, y = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == 'R'){
            a[x][y] = -cs[y];
            cs[y] += a[x][y];
            rs[x] += a[x][y];
            y++;
        }
        else{
            a[x][y] = -rs[x];
            cs[y] += a[x][y];
            rs[x] += a[x][y];
            x++;
        }
    }
    a[n - 1][m - 1] = -cs[m - 1];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++) cout << a[i][j] << ' ';
        cout << '\n';
    }

}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int t; cin >> t;
    while (t--) solve();
}