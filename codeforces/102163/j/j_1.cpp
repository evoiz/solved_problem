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
const int N=1e5+10;
int a[N],b[N],pr[N],n,m;
void update(int s,int e){
pr[s]++;
pr[e+1]--;
}
void solve(){
me(pr,0);
sc(n);sc(m);
read_arr(a,1,m);
read_arr(b,1,m);
loop(i,1,m){
  int s=a[i],e=a[i]+b[i];
  if(s<e){
     if(e>n){e-=n;update(s,n);update(1,e);continue;}
     update(s,e);
     continue;
  }
  else{
     if(e<1){e+=n;update(1,s);update(e,n);continue;}
     update(e,s);
     continue;
  }

}
loop(i,1,n){pr[i]+=pr[i-1];}
ll mx=*max_element(pr+1,pr+n+1);
loop(i,1,n){
 if(pr[i]==mx){printf("%lld %lld\n",i,mx);break;}
}

}


int t;
int main(){
sc(t);
while(t--){
solve();
}

}
/**
2
5 5
1 2 3 4 5
1 1 1 1 2
5 5
1 2 3 4 5
1 1 1 1 2
**/
