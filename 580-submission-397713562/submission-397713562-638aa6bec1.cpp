#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;  cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int mx=1;
    int curr=1;
    for(int i=1; i<n; i++){
       if(a[i]>=a[i-1]){
        curr++;
       }else{
        curr=1;
       }
       mx = max(mx,curr);
    }
    cout << mx << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}