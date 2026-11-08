#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    vector<int> a(4);
    for(int i=0; i<4; i++){
        cin >> a[i];
    }
    sort(begin(a),end(a));
    bool seg = false;
    for(int i=0; i<2; i++){
        if(a[i]+a[i+1] > a[i+2]){
            cout << "TRIANGLE\n";
            return;
        }else if(a[i]+a[i+1] == a[i+2]){
            seg = true;
        }
    }
    (seg)?cout<<"SEGMENT\n":cout<<"IMPOSSIBLE\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}