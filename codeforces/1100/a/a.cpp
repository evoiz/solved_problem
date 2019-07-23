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
#include<bits/stdc++.h>
using namespace std;
const int N=1e3;
ll n,k,a[N],tmp,ans,e,s;
int main() {
scll(n);scll(k);
read_arr_ll(a,0,n);
loop(i,0,n-1){
e+=(a[i]==-1);
s+=(a[i]==1);
}
loop(i,0,k-1){
ll aa=0,bb=0;
for(ll j=i;j<n;j+=k){
aa+=(a[j]==-1);
bb+=(a[j]!=-1);
}
ans=max(ans,abs(e-aa-(s-bb)));
}
printf("%lld\n",ans);
            return 0;
}