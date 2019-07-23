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
const int N=1e5+10;
int a[N],b[N],n,m,k;
vector<vector<int> > ans;
int ap,bp;
int main(){
sc(n);sc(m);sc(k);
read_arr(a,0,n);
read_arr(b,0,m);
bp=lower_bound(b,b+m,a[ap])-b;
while(ap<n){
	vector<int> tmp;
	loop(i,1,k){
		if(ap>=n){break;}
		if(a[ap]!=b[bp]){break;}
		tmp.pb(ap+1);
		ap++;
		bp++;
	}
	ans.pb(tmp);
	bp=lower_bound(b,b+m,a[ap])-b;
}
printf("%d\n",ans.size());
for(auto x:ans){
printf("%d",x.size());
for(auto y:x){printf(" %d",y);}
printf("\n");	
}
	
}
