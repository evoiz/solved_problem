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
const int N=2000+5,inf=1e9;
int n,a[N],ans=inf,tmp,cur;
int main(){
sc(n);
read_arr(a,0,n);
for(int i=0;i<n;i++){
tmp=__gcd(tmp,a[i]);
cur+=(a[i]==1);
}
if(tmp!=1){printf("-1");return 0;}
if(cur!=0){printf("%d ",n-cur);return 0;}
for(int i=0;i<n;i++){
  tmp=a[i];
  for(int j=i;j<n;j++){
 // cerr<<i<<" "<<j<<endl;
    tmp=__gcd(tmp,a[j]);
    if(tmp==1){ans=min(ans,j-i+1);break;}
  }
}
printf("%d",ans+n-2);
return 0;
}
