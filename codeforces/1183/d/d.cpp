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
const int N=2e5+10;
int a[N],n;
map<int,int> mp;
vector<int> fr;
void solve(){
	mp.clear();
	fr.clear();
    sc(n);
    read_arr(a,0,n);
    loop(i,0,n-1){
		mp[a[i]]++;
	}
	for(auto x:mp){fr.pb(x.S);}
	sort(all(fr));
	reverse(all(fr));
	//for(auto x:fr){cerr<<x<<" ";}cerr<<endl;
	ll ans=fr[0],mx=fr[0];
	for(int i=1;i<fr.size();i++){
		mx=min(1ll*fr[i],mx-1);
		ans+=1ll*mx;
		if(mx==0){break;}
	}
	printf("%lld\n",ans);
	
}
int main(){
  int t;
  sc(t);
  while(t--){
	  solve();
  }
}
