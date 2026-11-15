#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n; cin >> n;
    ll moves=0;

    while(n!=1){
        if(n%6==0){
            n/=6;
        }else if(n%3==0){
            n*=2;
        }else{
            moves=-1;
            break;
        }
        moves++;
    }
    cout << moves << endl;
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

/*
3==> 3*2==6  6/6=1   total=2
4==> 4*2==8
directly moves+1 if / by 6
else if by 3 then mul by 2 (kyuki 2 as a factor h hi nhi isliye multiply kr denge)
else -1
*/