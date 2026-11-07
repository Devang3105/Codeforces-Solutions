#include <bits/stdc++.h>
using namespace std;
string jeffrey;
int epstein;
int main() {
	cin>>jeffrey;
	epstein = jeffrey.find("WUB");
	while (epstein!=-1) {
	    jeffrey.replace(epstein, 3, " ");
	    epstein = jeffrey.find("WUB");
	}
	cout<<jeffrey;
}