#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const ll N=4000010,oo=1e9;
ll x,y,c,n;
bool ok(ll t){
    ll ans=2ll*t*(t+1ll)-4ll*t+1l;
	if(t>x){ans-=(t-x)*(t-x);}
	if(t>n-x+1){ans-=(t-n+x-1)*(t-n+x-1);}
	if(t>y){ans-=(t-y)*(t-y);}
	if(t>n-y+1){ans-=(t-n+y-1)*(t-n+y-1);}
	if(t>x+y){ans+=((t-x-y)*(t-x-y+1)/2);}
	if(t>x+n-y+1){ans+=((t-x-n+y-1)*(t-x-n+y-1+1)/2);}
	if(t>n-x+1+y){ans+=((t-n+x-1-y)*(t-n+x-1-y+1)/2);}
	if(t>n-x+1+n-y+1){ans+=((t-n+x-1-n+y-1)*(t-n+x-1-n+y-1+1)/2);}
	///cerr<<ans<<endl;
	return ans>=c;
}
ll bsr(ll l, ll h){
ll mid;
while(l<h){
    mid=(l+h+1)/2;
    if(ok(mid)){h=mid-1;}
    else{l=mid;}
}
return h;
}
int main(){
scanf("%lld%lld%lld%lld",&n,&x,&y,&c);
ll ans=bsr(0,1e9+10);
printf("%lld\n",ans);
    return 0;
}
/**
ax + by = d
4x + 6y =2
90x + 24y=6
x=1  y=-4;
15x + 4y=1
15x=4y-1
15x=4y-1
///////
17x+11y=1

**/
