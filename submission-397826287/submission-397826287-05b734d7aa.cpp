#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void solve() {
    int n, k;
    cin >> n >> k;
 
    vector<int> a(n);
    vector<int> b(n);
 
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
 
    int even_a = 0, odd_a = 0;
    int even_b = 0, odd_b = 0;
 
    for(auto i : a) {
        if(i % 2 == 0) even_a++;
        else odd_a++;
    }
 
    for(auto i : b) {
        if(i % 2 == 0) even_b++;
        else odd_b++;
    }
 
    if(k&1){
        if(even_a>=even_b){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }else{
        if(odd_a>=odd_b){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--) {
        solve();
    }
 
    return 0;
}