#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<class T>
using Oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
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
max op  may need is n

int l=0,r=n,ans=r;
    while (l<=r)
    {
        int mid=(l+r)/2;
        if(check(a,mid)){
            ans=mid;
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
  
  cout<<ans<<endl;
*/ 

void solve() {
    int n;cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    int c=n;
    sort(a.begin(),a.end());
    for (int i = 0; i < n-1; i++)
    {
        int x=a[i]+a[i+1];
        auto it=lower_bound(a.begin(),a.end(),x);
        int idx=-1;
        if(it==a.end()){
            idx=n-1;
        }else{
            it--;
            idx=it-a.begin();
        }
        int ryt=(n-idx-1);

        auto lb=lower_bound(a.begin(),a.begin()+i,a[i+1]);
        int left=-1;
        if(lb==a.begin()){
            left=0;
        }else{
            if(lb-a.begin()>=i){
                left=i;
            }else{
                left=lb-a.begin();
            }
        }
        
        c=min(c,ryt+left);
    }
    cout<<c<<endl;
}

int32_t main() {
    fastio;
    int t;
    cin >> t;
    while(t--) solve();
}