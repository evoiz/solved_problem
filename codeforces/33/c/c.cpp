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
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
using namespace std;
const int N=1e5+6,oo=1e9+10;
int a[N],n,sum,mx,tmp,ans;
int main(){
sc(n);
read_arr(a,1,n);
for(int i=1;i<=n;i++){sum+=a[i];}
ans=max(ans,sum);ans=max(ans,-sum);
for(int i=1;i<=n;i++){
    tmp+=a[i];
    if(tmp<0){tmp=0;}
    mx=max(mx,tmp);
}
///cerr<<mx<<endl;
mx+=mx-sum;
ans=max(ans,mx);
printf("%d\n",ans);
}
/**

16 %15=15
16 %1=0
**/
