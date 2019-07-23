#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=1e5+6;
ll n,a[N],ans;
int main(){
scanf("%lld",&n);
for(int i=0;i<n;i++){scanf("%lld",a+i);}
int i=0,j=0;
while(i<n){
  j=i;
  while(a[j]<a[j+1] && j<n){j++;}
  int len=j-i+1;
  if(len>ans){ans=len;}
  i=j+1;
}
printf("%lld\n",ans);
return 0;
}
