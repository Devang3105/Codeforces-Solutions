#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n,k; cin >> n >> k;
    n = (n+1)/2;
    if(k<=n){
        cout << 2*k - 1 << endl;
    }else{
        cout << 2*(k-n) << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

//1 2 3 4 5 6 7 8 9 10
//1 3 5 7 9 2 4 6 8 10

//1 2 3 4 5 6 7 
//1 3 5 7 2 4 6