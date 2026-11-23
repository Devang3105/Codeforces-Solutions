#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    
    int b_c = count(begin(s),begin(s)+k,'B');
    int ans = b_c;
    for(int i=k; i<n; i++){
        if(s[i-k]=='B'){
            b_c--;
        }
        if(s[i]=='B'){
            b_c++;
        }
        ans = max(ans, b_c);
    }

    cout << k-ans << endl;
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