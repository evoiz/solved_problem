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
const int N=1e6+10;
bool ch[N];
vector<ll>pr;
void sieve(){
for(long long i=2;i<N-3;i++){
    if(!ch[i]){
        pr.pb(i);
        for(long long j=i*2;j<=N-3;j+=i){ch[j]=1;}
    }
 }
}
int x,ans;
int main(){
sieve();
sc(x);	
while(x>4){
	 int i=0;
     int pp=pr[i];
     int n_x=x-pp;
     while(ch[n_x]){
		 i++;
		 pp=pr[i];
		 n_x=x-pp;
	 }
	 x=n_x-pp;
	 ans++;
     	
}
ans+=(x==4);
printf("%d\n",ans);
}
