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
ll a[15],n,d,x,ans;
int main(){
	scll(n);scll(x);scll(d);
	read_arr_ll(a,0,n);
	for(int mask=0;mask<(1<<n);mask++){
		ll sum=0;
		ll mx=-1;
		ll mn=1e9+7;
		loop(i,0,n-1){
			if(mask&(1<<i)){
			mx=max(a[i],mx);
			mn=min(a[i],mn);
			sum+=a[i];
		  }
		}
		//cerr<<sum<<" "<<mn<<" "<<mx<<endl;
		ans+=(sum>=x  && abs(mx-mn)<=d );
	}
	printf("%lld\n",ans);
}
