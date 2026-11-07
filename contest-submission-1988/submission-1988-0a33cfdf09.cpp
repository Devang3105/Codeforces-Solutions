#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 1000000000000000000LL
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

*/

// Design my Algo
/*

*/

void solve(){
ll n;
cin >> n;
string s;
cin >> s;
ll cnt = 0 , cnt1 = 0;
for(ll i = 0 ; i < n ;){
    while(i < n && s[i] == '0'){
        i += 1;
    }
    if(s[i-1] == '0')cnt += 1;
    if(s[i] == '1'){
        cnt1 += 1;
        i += 1;
    }
}
if(cnt1 > cnt)cout << "YES\n";
else cout << "NO\n";

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
    4. DON'T PANIC if stuck REMEMBER :-
------------------------------------------------------------------
        SOLUTIONS are simple
        PROOFS are simple
        IMPLEMENTATIONS are simple
------------------------------------------------------------------
    5. AFTER coding -> check EDGE CASES
    6. IF WA — Calm Down, think of failing test cases read your code and debug it.
    7. TRUST your plan -> DONT rewrite in panic unless sure.
*/