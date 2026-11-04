#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; ++i) cin >> arr[i];
    int cnt=0;
    for(int i=n-2; i>=0; i--){
        while(arr[i]>=arr[i+1]){
            cnt++;
            arr[i]/=2;
            if(arr[i]==0) break;
        }
        if(arr[i]==0 && arr[i+1]==0){
            cnt=-1;
        }
    }
    cout << cnt << endl;
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

a = 8 26 5 21 10
p = 1 2  3 4  5
sbse least pkdo aur uske pehle ke sbko chota bana do aur uske aagr ke bade hone chhaiye

a[i+1]>a[i]...okay else a[i+1]/2...count++
*/