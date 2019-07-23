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
ll ans,n,fr[30];
map<vector<int> ,ll> mp;
char s[N];
vector<int> get(){
	int sz=strlen(s);
	int cl=1;
	me(fr,-1);
	vector<int> ret;
	for(int i=0;i<sz;i++){
		if(fr[s[i]-'a']==-1){fr[s[i]-'a']=cl++;}
		ret.pb(fr[s[i]-'a']);
	}
	/**
	for(auto x:ret){
		cerr<<x<<" ";
	}
	cerr<<endl;**/
	return ret;
}
int main(){
go();
scll(n);
loop(i,1,n){
	scs(s);
	vector<int> tmp=get();
	///cout<<tmp.size()<<endl;
	ans+=1ll*mp[tmp];
	mp[tmp]++;
}
printf("%lld\n",ans);
}
