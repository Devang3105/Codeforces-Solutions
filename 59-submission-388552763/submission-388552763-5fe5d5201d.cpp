#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int upr=0,lwr=0;

    for(int i=0; i<s.size(); i++){
        if(s[i]>='a' && s[i]<='z'){
            lwr++;
        }else if(s[i]>='A' && s[i]<='Z'){
            upr++;
        }
    }
    if(upr>lwr){
        transform(s.begin(),s.end(),s.begin(),::toupper);
    }else{
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }

    cout << s << endl;
    return 0;
}