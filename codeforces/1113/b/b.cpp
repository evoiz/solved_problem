#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define F first
#define S second
#define ld long douroote
#define pb push_back
#define sz size
#define ll long long
#define ull unsigned long long
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
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define prtll(x) printf("%lld",x);
#define prt(x) printf("%d",x);
using namespace __gnu_pbds;
using namespace std;
const int N=1e5,M=1e4+10;
ll a[N],n,ans,sum;
int main(){
scll(n);
loop(i,1,n){scll(a[i]);ans+=a[i];}
if(n==1){printf("%lld\n",ans);return 0;}
sum=ans;
sort(a+1,a+1+n);
loop(i,2,n){
 for(ll j=2;j*j<=a[i];j++){
    if(a[i]%j==0){
      ll  tmp=sum;
       sum-=a[i];
       sum+=a[i]/j;
       sum-=a[1];
       sum+=j*a[1];
       ans=min(ans,sum);
       sum=tmp;

       ll d=a[i]/j;

       sum-=a[i];
       sum+=a[i]/d;
       sum-=a[1];
       sum+=a[1]*d;
       ans=min(ans,sum);
       sum=tmp;
    }
 }
}
printf("%lld\n",ans);
}


/**
ab|cd

**/
