#include <cstring>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>

#define REP(i,n) for(int i=0;i<n;i++)

using namespace std;

typedef struct
{
  int first;
  int second;
}apa;

apa arr[301000];
int arr2[300000];
int n,now;

bool cf1(apa const &x,apa const &y) {
  if (x.first!=y.first) {
    return x.first<y.first;
  }
  return false;
}

bool cf2(apa const &x,apa const &y) {
  if (x.second!=y.second) {
    return x.second<y.second;
  }
  return false;
}

int main(){
  scanf("%d\n",&n);
  for (int i=0;i<n;i++) {
    scanf("%d",&arr[i].first);
    arr[i].second = i;
  }
  sort(arr,arr+n,cf1);
  now=arr[0].first;
  for (int i=1;i<n;i++) {
    if (arr[i].first<=now) {
      arr[i].first=now+1;
      now=now+1;
    }else {
      now=arr[i].first;
    }
  }
  for (int i=0;i<n;i++) {
    arr2[arr[i].second]=arr[i].first;
  }
  for (int i=0;i<n-1;i++) {
    printf("%d ",arr2[i]);
  }
  printf("%d\n",arr2[n-1]);
}