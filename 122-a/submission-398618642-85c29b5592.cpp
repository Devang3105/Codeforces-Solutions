#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n; cin >> n;
    int a[] = {4, 7, 47, 74, 44, 77, 444, 777, 447, 474, 777, 774, 747, 477};
    for(int i=0; i<14; i++){
        if(n%a[i]==0){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}