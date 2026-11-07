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

void dfs(vector <vector <ll>>&a , vector <bool> &vis , ll n , ll i , ll &cycles){
    vis[i] = true;
    for(auto &p : a[i]){
        if(vis[p] == false){
            cycles += 1;
            dfs(a , vis , n , p , cycles);
        }
    }
}
void solve() {
ll n , m;
cin >> n >> m;
vector <ll> d(n);

for(ll i = 0 ; i < m ; i += 1){
    ll x , y;
    cin >> x >> y;
    x--;
    y--;
    d[x]++;
    d[y]++;
}
sort(begin(d) , end(d));
if(d[0] == 0)cout << "Brain Melt\n";
else if(d[n-1] == n - 1 && d[n-2] == 1)cout << 2 << "\n";
else cout << "Many\n";
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