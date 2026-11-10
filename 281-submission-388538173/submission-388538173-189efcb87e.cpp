#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    for(int i=0;i<s.length();i++){
        if(s[0]>='a' && s[0]<='z'){
            s[0] -= 32;
        }
    }
    cout << s << endl;
    return 0;
}