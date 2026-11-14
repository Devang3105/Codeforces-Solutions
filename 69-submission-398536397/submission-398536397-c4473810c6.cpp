#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n; cin >> n;
    int x_sum=0, y_sum=0, z_sum=0;
    for(int i=0; i<n; i++){
        int x, y, z;
        cin >> x >> y >> z;
        x_sum+=x;
        y_sum+=y;
        z_sum+=z;
    }

    (x_sum==0 && y_sum==0 && z_sum==0)?cout<<"YES\n":cout<<"NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}