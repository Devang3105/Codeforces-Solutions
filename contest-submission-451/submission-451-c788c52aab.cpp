#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n,m;cin>>n>>m;
    if(n>m){
        swap(n,m);
    }
    (n&1)?cout<<"Akshat\n":cout<<"Malvika\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}