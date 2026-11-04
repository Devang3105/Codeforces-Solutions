#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    int count=0;
    vector<pair<int,int>> both;

    for(int i=0; i<n; i++){
        both.push_back({a[i],i+1});
    }
    sort(begin(both),end(both));
    vector<int> ans;

    for(int i=0; i<n; i++){
        if(both[i].first <= k){
            count++;
            ans.push_back(both[i].second);
            k -= both[i].first;
        }else{
            break;
        }
    }
    
    cout << count << endl;

    for(auto &i : ans){
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}