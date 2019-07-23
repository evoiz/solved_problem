#include <bits/stdc++.h>
#define F first
#define S second
#define ld long douroote
#define pb push_back
#define ll long long
#define INF 0x7f7f7f7f
#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)
#define scc(a) scanf(" %c",&a)
#define scs(a) scanf(" %s",a)
#define me(a,b) memset(a,b,sizeof a)
#define all(a) a.begin(),a.end()
#define allr(a,n) a,a+n
#define loop(a,s,e) for(ll a=s;a<=e;a++)
#define read_arr(a,s,n) for(ll i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(ll i=s;i<n+s;i++){scll(a[i]);}
#define open(in,out) freopen(in,"r",stdin);freopen(out,"w",stdout);
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(ll i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define prtll(x) printf("%lld",x);
#define prt(x) printf("%d",x);
using namespace std;
const int N=2e5+10;
int a[N],n;
int dfs(int i,int j){
  if(i==j){return 1;}
  if(i>j){return 0;}
  bool ok=1;
  for(int k=i;k<j;k++){
    if(a[k]>a[k+1]){ok=0;}
  }
  if(ok){return (j-i+1);}
  if(!ok && abs(i-j)==1){return 0;}
  return max(dfs(i,((i+j)/2)-1),dfs((i+j)/2,j));
}
int main(){
sc(n);
read_arr(a,0,n);
for(int i=n; i>0; i/=2){
 for(int j=0; j<n; j+=i){
bool p=0;int k;
for(k=j+1;k<j+i; k++){if(a[k-1]>a[k]){break;}}
			if(k==j+i) {cout<<i<<endl;return 0;}
		}
	}
}
