#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
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
#define loop(s,e,st) for(int i=s;i<=e;i+=st)
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
using namespace std;
const int N=1e5+4;ll inf=1e9;
pair <int,int> p[N],aa,bb;
int n,mx,mn=inf+10,ans=-1;
int main(){
sc(n);
loop(0,n-1,1){sc(p[i].F);sc(p[i].S);mx=max(p[i].S,mx);mn=min(p[i].F,mn);}
loop(0,n-1,1){if(p[i].F==mn && p[i].S==mx){ans=i+1;break;}}
printf("%d\n",ans);
return 0;
}
/**


**/
