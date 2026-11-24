/*#pragma GCC optimize("O3")
#pragma GCC optimization("Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")*/
#include <bits/stdc++.h>
/*#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>*/
 
#define ll long long
#define ll1 long long
#define ull unsigned long long
#define dou long double
#define str string
#define vll vector<ll>
#define vi vector<int>
#define pll pair<ll, ll>
#define vpll vector<pll>
#define vbool vector<bool>
#define vstr vector<str>
#define vvll vector<vll>
#define pb push_back
#define pf push_front
#define endl "\n"
#define fr first
#define se second
//#define sortcmp(a) sort(a.begin(), a.end(), cmp)
#define sort(a) sort(a.begin(), a.end())
#define reverse(a) reverse(a.begin(), a.end())
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define INF 1000000000000000007
//#define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
 
using namespace std;
//using namespace __gnu_pbds;
 
mt19937 rng(1488);
ll randll(ll l, ll r){
    return uniform_int_distribution<ll>(l, r)(rng);
}

vector<vpll> g;

int main()
{
    speed;
    srand(time(0));

    ll t;
    cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
        g.clear();
        g.resize(n+7);

        for(int i= 0; i < m; i ++){
            ll a, b, c;

            cin >> a >> b >> c;
            g[a].pb({b, c});
            g[b].pb({a, -c});
        }

        bool q = 1, us[n+7]{};
        vll v(n+7, INF);
        set<ll> s;
        
        for(int i = 1; i <= n; i ++){
            if(us[i]) continue;
            vll ch;
            v[i] = 0;
            ch.pb(i);
            us[i] = 1;
            s.clear();
            s.insert(i);

            for(int i1 = 0; i1 < ch.size(); i1 ++){
                ll v1 = ch[i1];

                for(auto j : g[v1]){
                    s.insert(j.fr);
                    if(v[j.fr] == INF) v[j.fr] = v[v1]+j.se;
                    else if(v[j.fr] != v[v1]+j.se) q = 0;
                    if(!us[j.fr]){
                        us[j.fr] = 1;
                        ch.pb(j.fr);
                    }
                }
            }
            for(int j : s){
                v[j] = INF;
            }
            if(!q) break;
        }

        if(q) cout << "YES" << endl;
        else cout << "NO" << endl;
   }
}