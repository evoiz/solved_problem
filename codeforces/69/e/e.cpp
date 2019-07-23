#include <bits/stdc++.h>
#define F first
#define S second
#define ld long douroote
#define pb push_back
#define sz size
#define ll long long
#define ull unsigned long long
#define INF 0x7f7f7f7f
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
#define prtll(x) printf("%lld",x);
#define prt(x) printf("%d",x);
using namespace std;
const int N=1e5+10;
ll a[N],n,k,l,r;
map<ll,int> mp;
set<ll> st;
void add(ll x){
mp[x]++;
if(mp[x]==1){st.insert(x);}
if(mp[x]==2){st.erase(st.find(x));}
}
void del(ll x){
mp[x]--;
if(mp[x]==1){st.insert(x);}
if(mp[x]==0){st.erase(st.find(x));}
}
int main(){
scll(n);scll(k);
loop(i,1,n){scll(a[i]);}
loop(i,1,k){add(a[i]);}
loop(i,k,n){
if(st.size()){
auto it=st.end();
it--;
printf("%lld\n",*it);
}
else{printf("Nothing\n");}
add(a[i+1]);
del(a[i-k+1]);
}
}
/**
5 3
1 2 2 3 3


**/
