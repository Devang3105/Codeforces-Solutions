#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int k; cin >> k;
    vector<int> a(12);
    for(int i=0; i<12; i++) cin >> a[i];
    int count=0,sum=0;
    sort(a.rbegin(),a.rend());
    for(auto i : a){
        if(sum>=k) break;

        sum+=i;
        count++;
    }

    if(sum>=k){
        cout << count << endl;
    }else{
        cout << -1 << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

//har  ar max nikalke add krta hu jb tk vo greater naa ho jaye..saathme count bhi add krunga