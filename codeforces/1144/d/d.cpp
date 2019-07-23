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
const int N=2e5+10;
int a[N],fr[N],mx,n,s,dx[]={1,-1};
queue<int> q;
int main(){
sc(n);
read_arr(a,0,n);
loop(i,0,n-1){
  fr[a[i]]++;
  if(fr[a[i]]>mx){
   s=a[i];
   mx=fr[a[i]];
  }
}
loop(i,0,n-1){if(a[i]==s){q.push(i);}}
printf("%d\n",n-q.size());
while(q.size()){
  int idx=q.front();
  q.pop();
  loop(i,0,1){
    idx+=dx[i];
    if(idx<n && idx>=0)
    if(a[idx]==s){;}
    else{
      if(a[idx]>s){
        printf("2 %d %d\n",idx+1,idx-dx[i]+1);
      }
      else{
        printf("1 %d %d\n",idx+1,idx-dx[i]+1);
      }
      a[idx]=s;
      q.push(idx);
    }
    idx-=dx[i];
  }
}

}
