/**  elias **/
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
const int N=1e7+10;
bool ch[N];
vector<ll>pr;
void sieve(){
ch[0]=1;
ch[1]=1;
for(long long i=2;i<N-3;i++){
    if(!ch[i]){
        pr.pb(i);
        for(long long j=i*2;j<=N-3;j+=i){ch[j]=1;}
    }
 }
}
ll n;
int main(){
sieve();
scll(n);
for(auto x:pr){
   ll p=n-x;
   if(p<0){break;}
   if(ch[p]==0){
	   printf("%lld %lld\n",n-x,x);
	   return  0;
   }	
}
printf("-1\n");
}
