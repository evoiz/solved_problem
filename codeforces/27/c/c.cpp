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
int a[N],n,mx=-1e6-10,mn=1e6+10,mn_i,mx_i,tmp;
vector<int> v;
vector<int> ind;
bool ch(){
if(v[1]> v[0] && v[1]>v[2]){return 1;}
if(v[1]<v[0] && v[1]<v[2]){return 1;}
return 0;
}
int main(){
sc(n);
read_arr(a,0,n);
tmp=*max_element(a,a+n);
loop(i,0,n-1){if(a[i]==tmp){mx=i;break;}}
tmp=*min_element(a,a+n);
loop(i,0,n-1){if(a[i]==tmp){mn=i;break;}}
bool ok=0;
mx_i=1;mn_i=0;
mx=a[1];mn=a[0];
if(mx<mn){
swap(mx,mn);
swap(mx_i,mn_i);
}
loop(i,2,n-1){
   v.clear();
   ind.clear();
   ind.pb(mn_i);ind.pb(mx_i);ind.pb(i);
   sort(all(ind));
   for(auto x:ind){
     if(x==mn_i){v.pb(mn);continue;}
     if(x==mx_i){v.pb(mx);continue;}
     v.pb(a[i]);
   }
   if(ch()){ok=1;break;}
 // for(auto x:v){cerr<<x<<" ";}cerr<<endl;
  if(a[i]>mx){mx=a[i];mx_i=i;}
  if(a[i]<mn){mn=a[i];mn_i=i;}
}
if(!ok){printf("0\n");return 0;}
printf("3\n");
for(auto x:ind){
printf("%d ",x+1);
}

}

