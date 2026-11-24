#include <bits/stdc++.h>
#define ll long double
#define fr first
#define sc second
#define pb push_back 
using namespace std;

ll n;
bool check(vector <ll> a, ll v, ll lim){
    v += v;
    for(ll i = 1; i < a.size(); i ++){
        lim -= (a[i] + v * 2) * (a[i] + v * 2);
    }
    return lim == 0;
}

void solve(){
    ll lim, b = 0, c = 0, delta; 
    cin >> n >> lim;
    ll a = n;
    vector <ll> a1(n + 1);
    for(ll i = 1; i <= n; i ++){
        cin >> a1[i];
        b += a1[i];
        c += a1[i] * a1[i];
    }
    c -= lim;
    b *= 2;
    // cout << a << " " << b << " " << c << "\n"; return;
    delta = b * b - 4 * a * c;
    // cout << delta << "\n"; return;
    long long ans = (sqrt(delta) - b) / (4 * a);
    // cout << check(a1, ans, lim) << "\n";
    cout <<  ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // cout << sqrt(9 + 16); return 0;
    int t;
    cin >> t;
    while(t){
        solve();
        -- t;
    }
}