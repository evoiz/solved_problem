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
const int N=200000+10;
ll ans[N],n,k;
int main(){
scll(n);scll(k);
ll go=n-1,st=1;
while(k){
  if(k>=go){
     k-=go;
     ans[go]=st++;
  }
  go--;
}
for(int i=0;i<n;i++){
  if(ans[i]){printf("%lld ",ans[i]);continue;}
  printf("%lld ",st);
  st++;
}

}
/**
1 23
1 32

n * (n-1) * (n-2)

**/
