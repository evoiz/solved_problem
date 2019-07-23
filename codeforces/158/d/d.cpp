#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
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
using namespace std;
const int N =(3e4)+10;
int a[N],n,ans;
vector<int> v;
int  main(){
sc(n);
ans=-1e9;
read_arr(a,0,n);
for(int i=1;i*i<=n;i++){
if(i*i==n){v.pb(i);continue;}
if(n%i==0){v.pb(i);v.pb(n/i);}
}
for(auto x:v){
if((n/x)<3){continue;}
  for(int i=0;i<x;i++){
   int tmp=0;
   //cerr<<x<<":";
   for(int j=i;j<n;j+=x){
    tmp+=a[j];
    //cerr<<a[j]<<" ";
   }
   ///cerr<<endl;
   ans=max(ans,tmp);
  }

}
printf("%d\n",ans);
}
