#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void solve() {
    int p; cin >> p;
    string s; cin >> s;
    vector<int> fq(26,0);
 
    for(int i=0; i<s.size(); i++){
        fq[s[i]-'A']++;
    }
    int sum=0;
    for(int i=0; i<26; i++){
        if(fq[i]==1){
            sum+=2;
        }else if(fq[i]>=1){
            sum+=(fq[i]+1);
        }
    }
    cout << sum << endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}