#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 1; i < s.length() - 1; i++)
    {
        if (s[i] == 'U' && s[i + 1] == 'B' && s[i - 1] == 'W')
        {

            s[i] = ' ';
            s[i - 1] = ' ';
            s[i + 1] = ' ';
        }
    }
    for (int i = 0; i < s.length();)
    {
        if (s[i] == ' ' && s[i + 1] == ' ')
        {
            s.erase(i, 1);
        }
        else
        {
            i++;
        }
    }
    if (s[0] == ' ')
    {
        s.erase(0, 1);
    }
    cout << s << endl;
    return 0;
}