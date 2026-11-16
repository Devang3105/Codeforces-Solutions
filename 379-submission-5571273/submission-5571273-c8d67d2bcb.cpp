#include<fstream>
#include<iostream>
#include<algorithm>
using namespace std;

/**<  I/O buffer setter >*/
ifstream fi;

void io_set()
{
    fi.open("test.inp");
    cin.rdbuf(fi.rdbuf());
}

/**< ------------------ >*/

int a, b;

int main ()
{
	iostream::sync_with_stdio(false);
    //io_set();

	cin >> a >> b;

    int c = 0;
    while (a >= b)
    {
        c += b;
        a -= b;
        ++a;
    }

    cout << c + a;

	return 0;
}