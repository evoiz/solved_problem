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
const int N=1e3+10;
int a[N],b[N],n,m,mx,mn,d=-1e9;
pair<int ,int > p[N];
vector<int> sol,v;
int main(){
sc(n);sc(m);
read_arr(a,1,n);
loop(i,1,m){sc(p[i].F);sc(p[i].S);}
for(int i=1;i<=n;i++){
  v.clear();
  loop(j,1,n){b[j]=a[j];}
  loop(q,1,m){
    if(i >=p[q].F && i<=p[q].S){continue;}
    v.pb(q);
    loop(j,p[q].F,p[q].S){b[j]--;}
  }
  mx=*max_element(b+1,b+1+n);
  mn=*min_element(b+1,b+1+n);
    if(a[i]==mx){
      if (d<abs(mx-mn)){d= abs(mx-mn);sol = v ;}
    }

}
  printf("%d\n",d);
  printf("%d\n",(int)sol.size());
  for  (auto x : sol)
    printf("%d ",x);

return 0 ;


}
