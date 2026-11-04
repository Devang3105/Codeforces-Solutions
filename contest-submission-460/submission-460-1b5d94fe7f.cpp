#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, m; cin >> n >> m;
    int days=0;
    while(n>0){
        days++;
        n--;

        if(days%m==0){ //itne days agr m se equal ho jaye toh ek aur socka pair add ho jayega
            n++;
        }
    }
    cout << days << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}