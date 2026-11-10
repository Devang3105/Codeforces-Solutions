#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k; //n and k values
    int count=0;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    int check = v[k-1];
    for(int i=0; i<n; i++){
        if(v[i]>=check && v[i]>0)
            count++;
        else break;
        
    }

    cout << count << endl;

    return 0;
}