#include <bits/stdc++.h>

using namespace std;

namespace IO{
    void setIn(string s) {freopen(s.c_str(), "r", stdin);}
    void setOut(string s) {freopen(s.c_str(), "w", stdout);}
    void setIO(string s = ""){
        ios_base::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        #ifndef ONLINE_JUDGE
        #endif // ONLINE_JUDGE
        if (s.size()){
            setIn(s+".inp");
            setOut(s+".out");
        } else{
            #ifndef ONLINE_JUDGE
                freopen("input.txt", "r", stdin);
            #endif // ONLINE_JUDGE
        }
    }
}

using namespace IO;

namespace Function{
    template <typename T1, typename T2> bool amax(T1 &a, T2 b){
        if (a < b) {
            a = b;
            return 1;
        }
        return 0;
    }
    template <typename T1, typename T2> bool amin(T1 &a, T2 b){
        if (a > b){
            a = b;
            return 1;
        }
        return 0;
    }
    template <typename T> void compress(T &a){
        sort(a.begin(), a.end());
        a.resize(unique(a.begin(), a.end()) - a.begin());
    }
    template <typename T1, typename T2, typename T3> int position(T1 Begin, T2 End, T3 val, bool type = 0){
        if (type == 0){
            return lower_bound(Begin, End, val) - Begin;
        }
        return upper_bound(Begin, End, val) - Begin;
    }
    template <typename T> long long sqr(T x) {return 1LL * x * x;}
    template <typename T1, typename T2> long long GCD(T1 a, T2 b) {return b == 0 ? a : GCD(b, a % b);}
    template <typename T1, typename T2> long long LCM(T1 a, T2 b) {return 1LL * a / GCD(a, b) * b;}
}

using namespace Function;

namespace Output{
    char End_Of_Stream = '\n';
    void print(int x) {cout << x << End_Of_Stream;}
    void print(unsigned int x) {cout << x << End_Of_Stream;}
    void print(long unsigned int x) {cout << x << End_Of_Stream;}
    void print(long long x) {cout << x << End_Of_Stream;}
    void print(unsigned long long x) {cout << x << End_Of_Stream;}
    void print(float x) {cout << x << End_Of_Stream;}
    void print(double x) {cout << x << End_Of_Stream;}
    void print(long double x) {cout << x << End_Of_Stream;}
    void print(char x) {cout << x << End_Of_Stream;}
    void print(const char* x) {cout << x << End_Of_Stream;}
    void print(string x) {cout << x << End_Of_Stream;}
    void print(bool x) {cout << x << End_Of_Stream;}

    template <typename T1, typename T2> void print(pair <T1, T2> a) {cout << a.first << " " << a.second << End_Of_Stream;}
    template <size_t sz> void print(bitset<sz> a) {
        for(int i = 0; i < sz; i++){
            cout << a[i];
        }
        cout << End_Of_Stream;
    }

    template <typename T> void write(T x) {print(x);}

    template <class T, class... Ts> void write(T t, Ts... ts){
        write(t);
        write(ts...);
    }

    template <class T, class... Ts> void print(T t, Ts... ts){
        End_Of_Stream = ' ';
        write(t, ts...);
        cout << '\n';
        End_Of_Stream = '\n';
    }

    template <typename T> void print(T a){
        for(auto it : a){
            cout << it << " ";
        }
        cout <<"\n";
    }

    template <class T, class... Ts> void prine(T t, Ts... ts){
        print(t, ts...);
        exit(0);
    }
}

using namespace Output;

typedef pair <int, int> pii;
typedef long long ll;


const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};
const int INF = 1e9 + 10;
const long long INFL = 1e18+ 1e15;
const int MOD = 1e9 + 7;
const int MOD1 = (119 << 23) + 1;
const int N = 2e5;

struct aaa{
    int a_sum, b;
    int pos;
};


int main()
{
    setIO();
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> vec(n);
        vector<int> ans(n, -1);
        ll sum = 0;
        for(int i = 0; i < n; i++){
            cin >> vec[i];
            sum += vec[i];
        }
        int cnt1 = sum / n;
        int cnt0 = n - cnt1;
        //ans[n - 1] = (vec[n - 1] == n ? 1 : 0);
        vector<int> start;
        for(int i = 0; i < cnt0; i++){
            start.push_back(0);
        }
        for(int i = 0; i < cnt1; i++){
            start.push_back(1);
        }
       // print(start);
        int cur = 1;
        int pos = n - cnt1 - 1;
        deque<pair<int, int>> dq;
        vector<int> mp(n + 1, INF);
        for(int i = n - cnt1; i < n; i++){
            dq.push_back({1 +  vec[i], i});
            mp[i] = 1;
        }
        bool ok = false;
        while(dq.size() && pos >= 0){
            //print(ans);
            sort(dq.begin(), dq.end());
            pii p = dq.front();
            dq.pop_front();
            if(p.first + vec[pos] <= n){
                dq.push_back({p.first + vec[pos], pos});
            }
            mp[pos] = p.first;
            pos--;

        }
        //print(dq.size());
        /*for(int i = 0; i < n; i++){
            cout << mp[i] << " ";
        }
        cout << "\n";*/
        for(int i = 0; i < n; i++){
            if(mp[i] + vec[i] > n && mp[i] <= n){
                ans[i] = 1;
            }else{
                ans[i] = 0;
            }
        }
        if(ok){
            for(int i = pos + 1; i < n; i++){
                ans[i] = 1;
            }
        }
       print(ans);





    }
    return 0;
}