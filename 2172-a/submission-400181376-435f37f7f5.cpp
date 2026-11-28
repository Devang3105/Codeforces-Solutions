#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    int sum = a+b+c;
    int x = sum/3;
    if(abs(max({a,b,c}) - min({a,b,c})) >= 10){
        cout << "check again" << endl;
    }else{
        cout << "final " << sum - max({a,b,c}) - min({a,b,c}) << endl; 
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    while (t--) {
        solve();
    }

    return 0;
}