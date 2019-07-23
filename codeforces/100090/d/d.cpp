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
const int N=1e6+10;
int mem[N],n;
vector <int > dv;
int dp(int x){
	if(x==1){return 1;}
	int &ret=mem[x];
	if(ret!=-1){return ret;}
	ret=0;
	for(auto d:dv){
		if(d>x){break;}
		if((x%d)!=0){continue ;}
		ret+=dp(x/d);
	}
	return ret;
}
int main(){
sc(n);
me(mem,-1);
dv.pb(n);
for(int i=2;i*i<=n;i++){
	if(n%i==0){
	   dv.pb(i);
	   if(i*i==n){continue;}
	   dv.pb(n/i);
   }
}	
sort(all(dv));
int ans=dp(n);
cout<<ans<<endl;
}