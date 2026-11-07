#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 1e10
const ll mod = 1e9 + 7;



ll binpow(ll a , ll b){
    ll ans = 1;
    while(b){
        if(b&1){
            ans = (ans*a)%mod;
        }
        a = (a*a)%mod;
        b >>= 1;
    }
    return ans;
}

ll bitlen(ll x){
    ll cnt = 0;
    if(x == 0)return 1;
    while(x){
        x >>= 1;
        cnt += 1;
    }
    return cnt;
}
// Problem Statement
/*

*/
 
// Simple Observations
/*    
if there is an isolated pair then my ans is not valid 
For a cycle there is many 
If there is multiple segmented 
*/
 
// Design my Algo
/*

*/

ll trailing(ll n){
    ll cnt = 0;
    while (n % 2 == 0) {
        cnt++;
        n /= 2;
    }
    return cnt;
}

void solve() {
    ll s, m;
    cin >> s >> m;

    ll cs = trailing(s);
    ll cm = trailing(m);
    if (cm > cs) {
        cout << -1 << "\n";
        return;
    }

    ll l = 0, r = s / (1ll << cm);
    while (l != r - 1) {
        ll mid = l + (r - l) / 2;
        ll temps = s;
        for (ll i = 60; i >= 0; --i) {
            if ((m & (1ll << i)) == 0) continue;
            ll p = (1ll << i);
            ll pos = min(mid, temps / p);
            temps -= pos * p;
        }
        if (temps == 0) r = mid;
        else l = mid;
    }
    cout << r << "\n";
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
// RULES 
/*
    1. STAY CALM.
    2. DONT CODE WITHOUT SOLUTION NEVER NEVER NEVER
    3. READ THE PROBLEM CORRECTLY 
    4. DON'T PANIC if stuck REMEBER :-
------------------------------------------------------------------
        SOLUTIONS are simple
        PROOFS are simple
        IMPLEMENTATIONs are simple
------------------------------------------------------------------
    5. AFTER coding -> check EDGE CASES
    6. IF WA — Calm Down, think of failing test cases read your code and debug it.
    7. TRUST your plan -> DONT rewrite in panic unless sure.
*/