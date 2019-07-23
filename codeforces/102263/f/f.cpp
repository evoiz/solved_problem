/**  elias **/
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
const int N=1e3+10;
int mem[N][N],a[N],b[N],n,p;
vector<int> t[N];
int dp(int pos,int tt){
if(tt==(n-1)){return 1;}
int &ret=mem[pos][tt];
if(ret!=-1){return ret;}
ret=0;
int n_mod=t[tt].size();
int x=(pos+a[tt])%n_mod;
int y=((pos-a[tt])%n_mod+n_mod)%n_mod;
int ind=lower_bound(t[tt].begin(),t[tt].end(),b[tt])-t[tt].begin();
if(b[tt]!=t[tt][x]){
	if(x>ind){x--;}
	ret=max(ret,dp(x,tt+1) ); 	
}
if(b[tt]!=t[tt][y]){
	if(y>ind){y--;}
	ret=max(ret,dp(y,tt+1) ); 	
}

return ret; 	
}
int main(){
sc(n);sc(p);
read_arr(a,0,n-1);
read_arr(b,0,n-1);
loop(i,0,n-1){b[i]--;}
loop(i,0,n-1){t[0].pb(i);}
loop(i,1,n){
	int tmp=t[i-1].size();
	loop(j,0,tmp-1){
		if(t[i-1][j]==b[i-1]){continue;}
		t[i].pb(t[i-1][j]);
	}
}
me(mem,-1);
int ans=dp(p-1,0);
printf(ans?"Yes\n":"No\n");
}
