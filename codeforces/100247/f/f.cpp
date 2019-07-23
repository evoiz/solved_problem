#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)
#define scc(a) scanf(" %c",&a)
#define scs(a) scanf(" %s",a)
#define me(a,b) memset(a,b,sizeof a)
#define all(a) a.begin(),a.end()
#define allr(a,n) a,a+n
#define loop(a,s,e) for(ll a=s;a<=e;a++)
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define F first
#define S second
#define ld long double
#define ll long long
#define pb push_back
#define sz size
using namespace std;
void go(){
#ifdef Evoiz
 freopen("in2.txt","r",stdin);
 #endif
}
const int N=1e6+10;
ll n,x,y,a[N],b[N];
bool ok(ll cur){
ll more=abs(x-y);
loop(i,0,n-1){
  b[i]=a[i]-(cur*y);
  //cerr<<b[i]<<" ";
}
sort(b,b+n,greater<ll>() );
loop(i,0,n-1){
    if(b[i]>0){
		cur-=(b[i]+more-1)/more;
	}
	if(cur<0){return 0;}	
}
return 1;
}
int main(){
go();
scll(n);scll(x);scll(y);
read_arr_ll(a,0,n);
ll mx=*max_element(a,a+n);
if(x==y){
	mx=(mx+x-1)/x;
	printf("%lld\n",mx);
	return 0;
}
ll l=1,h=(mx+y-1)/y;
while(l<h){
	ll mid=(l+h)>>1;
	///cerr<<mid<<" "<<ok(mid)<<endl;
	if(ok(mid)){h=mid;}
	else{l=mid+1;}
}
printf("%lld\n",l);
}
