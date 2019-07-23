#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
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
#define loop(s,e,st) for(int i=s;i<=e;i+=st)
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define ll long long
using namespace std;
const int N=2e5+100;
int a[N],pr[N];
int n,l,r,q,k;
int main(){
sc(n);sc(k);sc(q);
for(int i=0;i<n;i++){
sc(l);sc(r);
a[l]++;a[r+1]--;
}
loop(1,N-1,1){
a[i]+=a[i-1];
pr[i]=pr[i-1]+(a[i]>=k);
}
while(q--){
sc(l);sc(r);
printf("%d\n",pr[r]-pr[l-1]);
}
}
