#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n; cin >> n;
    int cnt1=0, cnt2=0, cnt3=0;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        if(x==1){
            cnt1++;
        }else if(x==2){
            cnt2++;
        }else{
            cnt3++;
        }
    }

    cout << n - max({cnt1,cnt2,cnt3}) << endl;;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}