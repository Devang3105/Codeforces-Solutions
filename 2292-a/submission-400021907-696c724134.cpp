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



*/ 
void solve() {
    int l,a,b;cin>>l>>a>>b;
    int c=0;
    vi x(l,0),y(l,0);

    int i=0;
    while (!x[i])
    {
        x[i]=1;
        i=(i+a)%l;
    }
    i=0;
    while (!y[i])
    {
        y[i]=1;
        i=(i+b)%l;
    }
    for (int i = 0; i < l; i++)
    {
        if(x[i]&&y[i])c++;
    }
    cout<<c<<endl;
}

int32_t main() {
    fastio;
    int t;
    cin >> t;
    while(t--) solve();
}