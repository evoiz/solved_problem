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
 freopen("in.txt","r",stdin);
 #endif
}
const int N=1e4+10;
ll n,m,a[N],b[N],f[N],g[N],k,x,y;
int main(){
	go();
	scll(n);scll(m);
    read_arr_ll(a,1,n);
    read_arr_ll(b,1,m);
	for(int i=1;i<=n;i++){
		k=0;
		for(int j=1;j<=m;j++){
			if(a[i]==b[j])f[j]=f[k]+1,g[j]=k;
			if(a[i]>b[j]&&f[k]<f[j])k=j;
		}
		k=0;
	}
	for(int i=1;i<=m;i++){if(f[i]>f[x])x=i;}
	cout<<2ll*f[x]<<endl;
}
