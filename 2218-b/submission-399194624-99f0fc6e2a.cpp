#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    vector<int> a(7);
    int sum=0;
    for(int i=0; i<7; i++){
        cin >> a[i];
    }
    sort(begin(a),end(a));
    for(int i=0; i<6; i++){
        sum+=a[i];
    }
    int n = a.size();
    cout << a[n-1] - sum << endl;
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