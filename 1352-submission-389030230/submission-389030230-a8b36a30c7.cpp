#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    
    while(t--){

        int n; cin >> n;
        int mul=1; //10^0
        vector<int> s;
        while(n > 0){
            if(n%10 > 0){
                s.push_back((n%10)*mul);
            }
            n/=10;
            mul*=10;
        }
        
        cout << s.size() << endl;
        for(auto i : s) cout << i << " ";
        cout << endl;
        
    }

    return 0;
}