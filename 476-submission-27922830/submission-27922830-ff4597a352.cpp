#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define sc(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define pr(x) printf("%d\n",x)
#define prl(x) printf("%lld\n",x)
#define clr(x) memset(x, 0, sizeof(x))

const int N = 1e5+55;

string s1, s2;

long double nCr(int n, int r) {
	long double ans, nr;
	ll dr = 1;
	nr = 1.0;
	for(int i=2 ; i<=n ; i++) nr = nr*i;
	for(int i=2 ; i<=r ; i++) dr = dr*i;
	for(int i=2 ; i<=n-r ; i++) dr = dr*i;
	return nr/dr;
}

int main() {
// 	freopen("Task.in","r",stdin);freopen("Task.out","w",stdout);
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>s1>>s2;	
	int p = 0, n = 0, up = 0, down = 0, que = 0;
	int sz = s1.size();
	for(int i=0 ; i<sz ; i++) {
		if(s1[i]=='+') ++up;
		else --up;
	}
	for(int i=0 ; i<sz ; i++) {
		if(s2[i]=='?') {
			++que;
			continue;
		}
		if(s2[i]=='+') ++down;
		else --down;
	}
	long double ans = 0.0;
	if(que<abs(up-down)) {
		cout<<fixed<<setprecision(9)<<ans;
		return 0;
	}
	ll powe = 1;
	for(int i=1 ; i<=que ; i++) powe *= 2;
	// cout<<up<<" "<<down<<endl;
	ans = nCr(que, (up-down+que)/2)/powe;
	cout<<fixed<<setprecision(9)<<ans;
}