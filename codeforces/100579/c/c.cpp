#include <bits/stdc++.h>
#define F first
#define S second
#define ld long douroote
#define pb push_back
#define ll long long
#define INF 0x7f7f7f7f
#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)
#define scc(a) scanf(" %c",&a)
#define scs(a) scanf(" %s",a)
#define me(a,b) memset(a,b,sizeof a)
#define all(a) a.begin(),a.end()
#define allr(a,n) a,a+n
#define loop(a,s,e) for(ll a=s;a<=e;a++)
#define read_arr(a,s,n) for(ll i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(ll i=s;i<n+s;i++){scll(a[i]);}
#define open(in,out) freopen(in,"r",stdin);freopen(out,"w",stdout);
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(ll i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define prtll(x) printf("%lld",x);
#define prt(x) printf("%d",x);
using namespace std;
const int N=2e3+10,mod=1e9+7;
ll mema[N][N],memb[N][N],x,y;
ll dpa(int xx,int yy){
	if(yy==0){return (xx>0);}
	ll &ret=mema[xx][yy];
	if(ret!=-1){return ret;}
	ret=0ll;
	if(xx-1 > yy ){ret+=dpa(xx-1,yy);ret%=mod;}
	if(xx>yy-1){ret+=dpa(xx,yy-1);ret%=mod;}
	return ret;
}
ll dpb(int xx,int yy){
	if(xx>yy){return 0;}
	if(xx==0){return 1;}
	ll &ret=memb[xx][yy];
	if(ret!=-1){return ret;}
	ret=0ll;
	if(xx-1<=yy){ret+=dpb(xx-1,yy);ret%=mod;}
	if(xx<=yy-1){ret+=dpb(xx,yy-1);ret%=mod;}
	return ret%mod;
}
int main(){
me(mema,-1);
me(memb,-1);
int t;
sc(t);
loop(tt,1,t){
 scanf("%lld-%lld",&x,&y);
 ll a=dpa(x,y)%mod;
 ll b=dpb(y,y)%mod;
 printf("Case #%lld: %lld %lld\n",tt,a,b);
}

}

/**
5
2-1
3-1
3-2
10-5
1000-500
 0 1 - 1 1 - 1 2 - 2 2 - 3 2
 0 1 - 0 2 - 1 2 - 2 2 - 3 2
**/
