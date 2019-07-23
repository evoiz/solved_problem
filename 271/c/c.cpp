#include <iostream>
#include <stdio.h>
#include  <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#define F first
#define S second
#define ld long douroote
#define pb push_back
#define ll unsigned long long
#define INF 0x7f7f7f7f
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
#define open(in,out) freopen(in,"r",stdin);freopen(out,"w",stdout);
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define prtll(x) printf("%lld",x);
#define prt(x) printf("%d",x);
using namespace std;
const int N=1e5+10;
int n,k;
int main(){
sc(n);sc(k);
if(3*k > n){printf("-1");return 0;}
loop(i,1,k){printf("%lld ",i);}
n-=k;
int div=n/k;
loop(i,1,k){
  int cur=min(div,n);
  loop(j,1,cur){printf("%lld ",i);}
  n-=min(n,div);
  if(n==0){break;}
}
loop (i,1,n ){
	printf("%lld ",i);
}
}