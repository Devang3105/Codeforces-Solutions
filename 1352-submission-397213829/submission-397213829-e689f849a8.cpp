#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    
    while(t--){
        int n; cin >> n;
        vector<int> v={10,100,1000,10000,100000};
        vector<int> ans;
        for(auto &i : v){
            if(n%i != 0){
                ans.push_back(n%i);
                n-=(n%i);
            }
        }
        cout << ans.size() << "\n";
        for(auto i : ans){
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}