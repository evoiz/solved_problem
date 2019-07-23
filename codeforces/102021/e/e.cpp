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
const int N=1e4+10;
int t;
string a,b;
char in[N];
string scan(){scs(in);return string(in);}
int to_int(string s){
	int dot=-1,ret=0;
	for(int i=0;i<s.size();i++){if(s[i] == '.'){dot=i;}}
	if(dot==-1){s=s+".00000";}
	while(s.size()-dot-1<5){s=s+"0";}
    for(int i=0;i<s.length();i++){
		if(s[i]!='.'){
		  ret*=10;
		  ret+=(s[i]-'0');
		}
	}
	return ret;
}
bool prime(int x){
if(x==1){return 0;}
for(int i=2;i*i<=x;i++){
  if(x%i==0){return 0;}
}
return 1;
}
int main(){
sc(t);
while(t--){
  cin>>a>>b;
  int aa=to_int(a);
  int bb=to_int(b);
  int g=__gcd(aa,bb);
  aa/=g;
  bb/=g;
  if(aa==bb && aa==1){printf("2 2\n");continue;}
  if(prime(aa)&&prime(bb)){printf("%d %d\n",aa,bb);continue;}
  printf("impossible\n");continue;
}

}
/**

1 1 3 5
1 6 8 9
**/
