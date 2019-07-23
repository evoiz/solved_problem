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
const int N= 200000+10;
ll n,cost[N],tmp,ret,ans;
set<ll> st;
int main(){
  scll(n);
  scll(tmp);
  st.insert(tmp);
  loop(i,2,n){
	 scll(tmp);
	 ret=0;
	 auto x=st.upper_bound(tmp);
     if(x!=st.end()){
	   if(cost[*x]){ret=max(ret,cost[*x]);} 	 
	}
	if(x!=st.begin()){
		--x;
		if(cost[*x]){ret=max(ret,cost[*x]);}
	}
	ans+=1ll*ret+1;
	cost[tmp]=1ll*ret+1;
	st.insert(tmp);
  }	
  printf("%lld\n",ans);
}