#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for(int i=0; i<n; i++) cin >> a[i];

    //10 9 8 7 7 7 5 5
    //0 1 2 3 4 5
    int score = a[k-1];
    int participants = 0;

    for(int i=0; i<n; i++){
        if(a[i]>=score && a[i]>0){
            participants++;
        }
    }

    cout << participants << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}