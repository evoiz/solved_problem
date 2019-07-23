#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N = 2e5+10;
vector<ll> aa,bb;
set<ll> v;
ll l,r,x,y,ans;

int main(){
cin>>l>>r>>x>>y;
for(ll i=1;i*i<=x;i++){if(x%i==0){aa.push_back(i);aa.push_back(x/i);}}
for(ll i=1;i*i<=y;i++){if(y%i==0){bb.push_back(i);bb.push_back(y/i);}}
for(int i=0;i<aa.size();i++){
   for(int j=0;j<bb.size();j++){
      v.insert(aa[i]*bb[j]);
   }
}
ll mlt=x*y;
for(auto a:v){
        ll b=mlt/a;
        if(a >= l && a <= r && b >= l && b <= r && __gcd(a,b) == x){ans++;}
    }
    cout<<ans<<endl;
}
