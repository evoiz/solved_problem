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

vector<int> div(vector<int> num,int divisor,int base){
reverse(num.begin(),num.end());
vector<int> ret;
int idx=0;
int tmp=num[idx];
while(tmp<divisor){
tmp=tmp*base+(num[++idx]);
}
while (num.size()>idx){
ret.push_back(tmp/divisor);
tmp=(tmp%divisor)*base+num[++idx];
}

if(ret.size()==0){ret.push_back(0);}
reverse(ret.begin(),ret.end());
return ret;
}

vector <int> subtract(vector<int > a,vector<int> b,int base){
/**a0 * base^0 + a1*base^1+....;**/
vector<int> ret;
int n=a.size(),m =b.size();
int carry=0;
for(int i=0;i<m;i++){
    int sub = (a[i]-b[i]-carry);
    if(sub<0){sub=sub+base;carry = 1;}
    else{carry=0;}
    ret.push_back(sub);
}
for(int i=m;i<n;i++){
    int sub=(a[i]-carry);
    if(sub<0){sub=sub+base;carry=1;}
    else{carry=0;}
    ret.push_back(sub);
}
return ret;
}

vector<int> add(vector<int > a,vector<int> b,int base){
    /**a0 * base^0 + a1*base^1+....;**/
    vector<int> ret;
    if (a.size() > b.size()){swap(a,b);}
    int n=a.size(),m =b.size();

    int carry = 0;
    for (int i=0;i<n;i++){
        int sum =a[i]+b[i]+carry;
        ret.push_back(sum%base);
        carry =sum/base;
    }
    for(int i=n;i<m;i++){
        int sum = (b[i]+carry);
        ret.push_back(sum%base);
        carry = sum/base;
    }
    if(carry){ret.push_back(carry);}
    return ret;
}
const int N=2e5+10;
char a[N],b[N];
int n;
vector<int> aa,bb;
int main() {
  sc(n);
  scs(a);
  scs(b);
  for(int i=n-1;i>=0;i--){
    aa.pb(a[i]-'a');
    bb.pb(b[i]-'a');
  }
  vector<int> ans=add(aa,div(subtract(bb,aa,26),2,26),26);
  reverse(all(ans));
  for(auto x:ans){printf("%c",x+'a');}
  return 0;
}
