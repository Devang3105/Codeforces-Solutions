#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> freq(100001, 0);
    vector<int> suffix(n);
    int cnt = 0;
    for(int i = n-1; i >= 0; i--) {
        if(freq[a[i]] == 0) {
            cnt++;
        }
        freq[a[i]]++;
        suffix[i] = cnt;
    }
    while(m--) {
        int l;
        cin >> l;
        cout << suffix[l-1] << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}