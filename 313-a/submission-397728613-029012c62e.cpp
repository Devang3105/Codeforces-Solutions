#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n; cin >> n;
    int l = n/10;
    int l_s = (n/100)*10 + (n%10);

    if(n>=0){
        cout << n << endl;
    }else{
        cout << max({n,l,l_s}) << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}