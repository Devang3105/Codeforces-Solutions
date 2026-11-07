#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    string ans = "";
    bool needspace = false;

    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){

            i+=2;

            if(!ans.empty()){
                needspace = true;
            }

        }
        else{

            if(needspace){
                ans += ' ';
                needspace = false;
            }
            ans += s[i];
        }
        
    }

    

    cout << ans << endl;

    return 0;
}