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
const int N= 200000+10;
ll n;
ll ok(ll x) { 
    ll number_of_digits = 0; 
    for (ll i=1; i <= x; i *= 10) 
        number_of_digits += (x - i + 1); 
    return (number_of_digits); 
} 
int main(){
scll(n);
ll l=0,h=1e12;
while(l<h){
  ll mid=(l+h+1)>>1;
  if(ok(mid)<n){l=mid;}
  else{h=mid-1;}	
}
n-=ok(l);
///cerr<<l<<" "<<n<<endl;
string s="";
for(ll i=l+1;;i++){
	s+=to_string(i);
	if(n<s.length()){break;}
}
cout<<s[n-1]<<endl;
}
