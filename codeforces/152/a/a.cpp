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
const int N=110;
int a[N][N],ans,v[N],n,m;
char s[N];
int main(){
sc(n);sc(m);
loop(i,1,n){
	scs(s);
	loop(j,1,m){
		a[i][j]=s[j-1]-'0';
	}
}
loop(i,1,n){
	int ok=1;
	loop(j,1,m){
	    ok=1;
		int cur=a[i][j];
		loop(k,1,n){
			if(a[k][j]>cur){ok=0;break;}
		}
		if(ok){break;}
	}
	ans+=ok;
}
printf("%d\n",ans);
}
