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

int powermod(int a, int b, int mod = mod) {
    int res = 1;
    while(b) {
        if(b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}
int modinv(int a, int mod = mod) { return powermod(a, mod-2, mod); }

int lcm(int a,int b){return (a*b)/__gcd(a,b);}

bool isPrime(int n) {
    if(n < 2) return false;
    for(int i=2;i*i<=n;i++) if(n%i==0) return false;
    return true;
}
int Count_of_Factors(int n) {
int c = 0;
for (int i = 1; i*i <=n; i++)
{
if(n%i==0){
 c++;
 if(i!=(n/i))c++;
}
}
 return c;
}
long long product_of_factors(int n) {
    int d = Count_of_Factors(n);
    long long res = 1;

    for (int i = 0; i < d / 2; i++) res *= n;

    return res;
}

vector<int> sum_of_factors(int n) {
    vector<int> sumdiv(n + 1, 0);

    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; j += i) {
            sumdiv[j] += i;
        }
    }

    return sumdiv;
}

vector<int> spf(int n) {
    vector<int> sieve(n + 1, 0);

    for (int x = 2; x <= n; x++) {
        if (sieve[x] != 0) continue;

        for (int u = 2 * x; u <= n; u += x) {
            if (sieve[u] == 0) sieve[u] = x;
        }
    }
    return sieve;
}

vector<int> lpf(int n) {
    vector<int> big(n + 1, 1);
    big[0] = big[1] = 1;

    for (int i = 2; i <= n; ++i) {
        if (big[i] == 1) {
            for (int j = i; j <= n; j += i) {
                big[j] = i;
            }
        }
    }

    return big;
}
vi sieve(int n) {
vi primes;
vector<bool> isPrime(n+1,true);
isPrime[0] = isPrime[1] = false;

for (int i =4; i <=n; i+=2)
   isPrime[i]=false;

for(int i=3;i*i<=n;i+=2) {  
   if(isPrime[i]) {
        for(int j=i*i;j<=n;j+=2*i) isPrime[j]=false;
    }
  }
   for(int i=2;i<=n;i++) if(isPrime[i]) primes.pb(i);
  return primes;
}
int factorial(int n) {
    int result = 1;
    for(int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

vector<long long> factors(int n) {
    vector<long long> a;
    for(long long i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            a.push_back(i);
            if(i != n / i)
                a.push_back(n / i);
        }
    }
    sort(a.begin(), a.end());
    return a;
}

vector<long long> primeFactors(long long n) {
    vector<long long> res;
    for(long long i = 2; i * i <= n; i++) {
        while(n % i == 0) {
            res.push_back(i);
            n /= i;
        }
    }
    if(n > 1)
        res.push_back(n);
    return res;
}

int phi(int n) {
    int result = n;

    for (int p = 2; p * p <= n; ++p) {
        if (n % p == 0) {
            while (n % p == 0)
                n /= p;

            result -= result / p;
        }
    }

    if (n > 1)
        result -= result / n;

    return result;
}

/* 
spliting bigger once more help full than lower
do spliting work first then remove..
can i say a prime number will always mess things up?
13-->4+4+5/ 2+2+9 / 2+4+7
yup prime mess
remove prime if u have it it always needs 2 values who has diff prime factors..
11--> 2+8+3..
a->x ,x+2 need to be..

so if i wanna make gcd as g then i have to remove all number which r <g+2 & prime...

x=4 then 15--> 4+3+8--> 3+4+8 no poss
then how can ik spliting will gonna help me when, definatly not gonn ahelp me if its a prime but other time?
there is no way to prove...


1 number is x antoher is last number which is mul of x <a[i]
and dlt mid one...
if both same then cant poss
so for every possible g find how many muls of g u have on arr... they r gud to go
other u have lets say y items.. so those y if satisfy above condition then ok else cnt how many doesnt follow
lets say thats cnt
if(cnt<=k) yes ans
else continue...

problem is how can ik which r gud and which r bad, even if ik that how ill traverse every bad and check if they satisfy or not..
need to find this shit


*/ 
void solve() {
    int n,k;cin>>n>>k;
    vector<int> a(n);
    for (auto &x : a) cin >> x;

    sort(a.begin(),a.end());
    int g=1;

    for (int i = n; i >=1; i--)
    {
        int mul=0;
        int total=upper_bound(a.begin(),a.end(),4*i)-a.begin();
        for (int j = 1; j <=4; j++)
        {
            mul+=upper_bound(a.begin(),a.end(),j*i)-lower_bound(a.begin(),a.end(),j*i);
        }
        if(total-mul<=k){
            cout<<i<<endl;
            return;
        }
        
    }
    cout<<g<<endl;



}

int32_t main() {
    fastio;
    int t;
    cin >> t;
    while(t--) solve();
}