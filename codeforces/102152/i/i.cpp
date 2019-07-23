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
const int N=2e4+10;
priority_queue<int> q;
int t;
int main(){
sc(t);
while(t--){
 int n,k,tmp;
 sc(n);sc(k);
 loop(i,1,n){sc(tmp);q.push(-tmp);}
 while(k){
   tmp=-q.top();
   if(tmp>0){break;}
   q.pop();
   q.push(tmp);
   k--;
 }
 if(k&1){
   tmp=-q.top();
   q.pop();
   q.push(tmp);
 }
 int ans=0;
 while(q.size()){ans+=-q.top();q.pop();}
 printf("%d\n",ans);
}

}
/**
   7  8  1

   6     2

   5 4  3
**/
