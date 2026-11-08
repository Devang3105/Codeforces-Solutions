#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n; cin >> n;
    set<int> s;

    for(int i=0; i<n; i++){
        int x; cin >> x;
        s.insert(x);
    }
    if(s.size()==1){
        cout << "NO\n";
        return;
    }
    auto it = s.begin();
    it++;
    cout << *it << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}