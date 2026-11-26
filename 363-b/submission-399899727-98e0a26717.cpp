#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    int cur_sum = 0;
    for(int i=0; i<k; i++){
        cur_sum += a[i];
    }

    int ans = 1; 
    int min_sum = cur_sum;

    for(int i=k; i<n; i++){
        cur_sum += a[i]-a[i-k];
        if(cur_sum<min_sum){
            min_sum=cur_sum;
            ans = i-k+2;
        }
    }

    cout << ans << endl;
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