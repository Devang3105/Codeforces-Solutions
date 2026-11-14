#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    
    cout << max({(a+b)*c, (b+c)*a, a*b*c, a+b+c}) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}