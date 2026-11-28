#include <bits/stdc++.h>
using namespace std;
/*
 * I dont care im best or not, there is ppl better than me there is ppl weaker than me... all i have to care to be better than yesterday...
 */
template<class T> void _print(T x){if constexpr(is_same_v<T,string>)cerr<<'"'<<x<<'"';else if constexpr(is_same_v<T,char>)cerr<<'\''<<x<<'\'';else cerr<<x;}
template<class T,class U> void _print(pair<T,U> p){cerr<<"{";_print(p.first);cerr<<", ";_print(p.second);cerr<<"}";}
template<class T> void _print(vector<T> v){cerr<<"[ ";for(auto x:v)_print(x),cerr<<' ';cerr<<"]";}
template<class T> void _print(vector<vector<T>> v){for(auto x:v){_print(x);cerr<<'\n';}}
template<class T,size_t N> void _print(array<T,N> a){cerr<<"[ ";for(auto x:a)_print(x),cerr<<' ';cerr<<"]";}
template<class T> void _print(set<T> s){cerr<<"{ ";for(auto x:s)_print(x),cerr<<' ';cerr<<"}";}
template<class T> void _print(multiset<T> s){cerr<<"{ ";for(auto x:s)_print(x),cerr<<' ';cerr<<"}";}
template<class T> void _print(unordered_set<T> s){cerr<<"{ ";for(auto x:s)_print(x),cerr<<' ';cerr<<"}";}
template<class K,class V> void _print(map<K,V> m){for(auto [k,v]:m){_print(k);cerr<<" -> ";_print(v);cerr<<'\n';}}
template<class K,class V> void _print(unordered_map<K,V> m){for(auto [k,v]:m){_print(k);cerr<<" -> ";_print(v);cerr<<'\n';}}
template<class T> void _print(queue<T> q){cerr<<"[ ";while(!q.empty())_print(q.front()),cerr<<' ',q.pop();cerr<<"]";}
template<class T> void _print(deque<T> q){cerr<<"[ ";for(auto x:q)_print(x),cerr<<' ';cerr<<"]";}
template<class T> void _print(stack<T> s){cerr<<"[ ";while(!s.empty())_print(s.top()),cerr<<' ',s.pop();cerr<<"]";}
template<class T> void _print(priority_queue<T> q){cerr<<"[ ";while(!q.empty())_print(q.top()),cerr<<' ',q.pop();cerr<<"]";}

#define debug(x) cerr<<#x<<" = ",_print(x),cerr<<'\n'

/*---SHORTCUTS---*/
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vpi vector<pair<int,int>>
#define pb push_back
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define alice cout << "Alice\n"
#define bob cout << "Bob\n"

const int mod = 1e9+7;
const int INF = 1e18;


/* 
mex is k means from l to r all values shud be present from 0 to k-1..
i can have duplicates ok
we need r-l+1 >= k
which will be as question says
put all vals from 0 to k-1 there then after that
if i get min ill put all values min to min+r-l+1 there...
problem is if i do it in order i may create problem for prev once...
k is fixed means the only thing we have to know is

0 -> k-1 for mex, k & k+1 for min
now since we can have duplicate
we can always choose 1 k and all 101 for min
initially all 101
when ever min i need ill put one k there
for mex ill do 0 to k-1 and if any pos merge
then whta


*/ 
void solve() {
    int n,k,q;cin>>n>>k>>q;
    vi a(n+1);
    vi mn(n+1,0),mx(n+1,0);
    while (q--)
    {
        int op,l,r;cin>>op>>l>>r;
        for (int i = l; i <=r; i++){
            if(op==1)mn[i]=1;
            else mx[i]=1;
        }
    }
    int it=0;
    for (int i = 1; i <=n; i++)
    {
        if(mn[i] && mx[i])a[i]=101;
        else if(mn[i])a[i]=k;
        else{
            a[i]=i%k;
        }
    }
    

    for(int i=1;i<=n;i++)cout<<a[i]<<" ";
    cout<<endl;
    
}

int32_t main() {
    fastio;
    int t;
    cin >> t;
    while(t--) solve();
}