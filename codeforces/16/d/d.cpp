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
int n;
vector<int> tim;
string tmp,s;
int ans=1;
int main(){
sc(n);
cin.ignore();
while(n--){
  getline(cin,s);
  tmp=s.substr(1,2);
  int h=stoi(tmp);
  tmp=s.substr(4,2);
  int m=stoi(tmp);
  if(h==12){h=0;}
  if(s[7]=='p'){h+=12;}
  tim.pb(60*h+m);
}
///for(auto x:tim){cerr<<x<<" ";}cerr<<endl;
loop(i,1,tim.size()-1){
  int tt=1;
  while(tim[i]==tim[i-1]){
    tt++;
    i++;
    if(tt>10){ans++;i--;break;}
  }
  if(i>=tim.size()){break;}
  if(tim[i]<tim[i-1]){ans++;}
}
printf("%d\n",ans);
}
/**
2 2
NES
S
WS
3 2
NSWE
SW
SEW
NEW
SN
**/
