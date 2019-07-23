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
const int N=2e3+10;
ll n,tmp[N],a[N],p[N],sum,ans;
priority_queue<ll> q;
int main(){
scll(n);
loop(i,1,n){scll(tmp[i]);sum+=tmp[i];}
loop(i,1,n){scll(p[i]);a[i]=tmp[p[i]];}
//err_arr(a,1,n);
for(int i=1;i<=n;i++){
 if(i%2){
   q.push(-a[i]);
   continue;
 }
 ll x=-q.top();
 if(x<a[i]){q.pop();q.push(-a[i]);}
}
while(q.size()){ans+=-q.top();q.pop();}
cout<<ans-(sum-ans)<<endl;
}
