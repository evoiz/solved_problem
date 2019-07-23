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
const int N=1e3+10,M=1e6+10;
ll a[N],n,fr[M],ans;
set<ll> st,aa;
ll solve(ll num){
ll ret=0;
for(auto x:aa){
if(num-x>=0){
	ll y=num-x;
	if(x==y){ret+=2*(fr[x]/2);}
	else{ret+=min(fr[x],fr[y]);}
}	
	
}	
ret/=2;
return ret;	
}
int main(){
	scll(n);
	read_arr_ll(a,1,n);
	loop(i,1,n){fr[a[i]]++;aa.insert(a[i]);}
    loop(i,1,n){
	   loop(j,i+1,n){
		   st.insert(a[i]+a[j]);
	   }	
	}
	for(auto x:st){
		ans=max(ans,solve(x));
	}
	printf("%lld\n",ans);
}
