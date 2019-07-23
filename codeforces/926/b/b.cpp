#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
#define oo 1e9

using namespace std;

const int N=300;
ll n,last,tmp,gcd,mx=-oo,mn=oo,ans;
int main(){
  scanf("%lld%lld",&n,&last);
  mn=last;mx=last;
  for(int i=1;i<n;i++){scanf("%lld",&tmp);gcd=__gcd(gcd,1ll*abs(last-tmp));last=tmp;mx=max(mx,tmp);mn=min(mn,tmp);}
  ans=(abs(mx-mn)/gcd)-n+1;
  printf("%lld\n",ans);
    	return 0;
}
