#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
ll N=1e18+10;
set <ll > st;
bool pr(ll x){
ll sq=sqrtl(x);
return (sq*sq==x);
}
void seive(){
  for(ll i=2;i<=1e6;i++){
    ll tmp=1ll*i*i*i;
   /// cout<<tmp<<endl;
     for(;tmp<=1e18; tmp=1ll * tmp *i){
        if(!pr(tmp)){st.insert(tmp);}
          if(tmp> N/i){break;}
        }
  }
}
int main(){
seive();
vector <ll> v (st.begin(),st.end());
ll q,r,l;
///cout<<"done";
scanf("%lld",&q);
while(q--){
  scanf("%lld%lld",&l,&r);
  ll ans=upper_bound(v.begin(),v.end(),r)-lower_bound(v.begin(),v.end(),l);
  ans += floor(sqrtl(r))-ceil(sqrtl(l))+1;
  printf("%lld\n",ans);
  }
return 0;
}
