
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
const int N=1e6+10;
int spf[N];
void sieve(){
spf[1]=1;
for(int i=2; i<N; i++){spf[i]=i;}
for(int i=4; i<N; i+=2){spf[i]=2;}
for(int i=3; i*i<N; i++){
if(spf[i]==i){
 for(int j=i*i; j<N; j+=i)
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}
int t,n,a[N];
map<int,int> mp;
int main(){
sieve();
sc(t);
while(t--){
mp.clear();
sc(n);
read_arr(a,1,n);
int ans=0;
for(int i=1;i<=n;i++){
  if(a[i]==1){continue;}
  set<int> fact;
   while(a[i]!=1){
    fact.insert(spf[a[i]]);
     a[i]=a[i]/spf[a[i]];
    }
  for(auto x:fact){mp[x]++;}
}
for(auto x:mp){
ans+=(x.S/3)+(x.S%3!=0);
}
printf("%d\n",ans);
}
return 0;
}
