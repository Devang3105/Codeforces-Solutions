#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int c; cin >> c;
    vector<int> a(c);
    int sum=0;
    for(int i=0; i<c; i++){
        cin >> a[i];
        sum += a[i];
    }
    sort(begin(a),end(a),greater<int>());
    int target=0; int rem_sum=sum;
    int cnt=0;
    for(auto i : a){
        target+=i;
        rem_sum-=i;
        cnt++;
        if(target>rem_sum){
            break;
        }
    }
    cout << cnt << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}