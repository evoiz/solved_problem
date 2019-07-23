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
int n,tmp,ans;
vector<int> odd,even;
int main(){
sc(n);
loop(i,1,n){
sc(tmp);
if(tmp%2){odd.pb(tmp);}
else{even.pb(tmp);}
}
if(abs( ((int) odd.size() ) - ((int)even.size()) )<=1 ){printf("0");return 0;}
sort(all(even));
sort(all(odd));
if(even.size() > odd.size()){
   int k=min(even.size(),odd.size())+1;
   for(int i=0;i+k<even.size();i++){
     ans+=even[i];
   }
}
else{
   int k=min(even.size(),odd.size())+1;
   for(int i=0;i+k<odd.size();i++){
     ans+=odd[i];
   }
}
cout<<ans<<endl;
}



/**

0 26
1 5

**/
