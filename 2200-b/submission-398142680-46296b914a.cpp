#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n ; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    bool sort = true;

    for(int i=0; i<n-1; i++){
        if(a[i]>a[i+1]){
            sort = false;
            break;
        }
    }
    if(sort){
        cout << n << endl;
    }else{
        cout << 1 << endl;
    }
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