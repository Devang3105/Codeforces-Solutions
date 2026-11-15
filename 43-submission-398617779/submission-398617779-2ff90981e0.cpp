#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n; cin >> n;

    string t1, t2, s;
    int cnt=0;

    cin >> t1;
    cnt++;

    for(int i=1; i<n; i++){
        cin >> s;
        if(s==t1){
            cnt++;
        }else{
            t2 = s;
        }
    }

    (cnt > n-cnt)?cout<<t1<<endl:cout<<t2<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}