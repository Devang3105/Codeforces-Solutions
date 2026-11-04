#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    ll sum=0;
    sum+=a[n-1];
    ll mx = a[n-1]-1;
    for(ll i=n-2; i>=0; i--){
        sum += min(mx,a[i]);
        mx = min(mx,a[i]) - 1;
        if(mx<=0){
            break;
        }
    }
    cout << sum << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

//back se iteraate kr lnge
//mx ko -1 store
//then compare krke sum me add
// int sum=0;
    // sum+=a[n-1];
    // int mx = a[n-1]-1;
    // for(int i=n-2; i>=0; i--){
    //     sum += min(mx,a[i]);
    //     mx = min(mx,a[i])-1;
    //     if(mx<=0){
    //         break;
    //     }
    // }
    // cout << sum << endl;