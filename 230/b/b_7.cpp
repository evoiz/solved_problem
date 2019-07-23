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
#define ii pair<int,int>
#define scs(a) scanf(" %s",a)
#define me(a,b) memset(a,b,sizeof a)
#define all(a) a.begin(),a.end()
#define allr(a,n) a,a+n
#define loop(s,e,st) for(int i=s;i<=e;i+=st)
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
using namespace std;
const int N=1e5+10;
ll t,n;
map<ll,int> mem;
bool is(ll x){
ll tmp=sqrt(x);
return (tmp*tmp==x);
}
bool pr(ll x){
for(int i=2;i*i<=x;i++){
if(x%i==0){return 0;}
}
return 1;
}
int main(){
mem[1]=0;mem[4]=1;mem[9]=1;
scll(t);
while(t--){
scll(n);
if(mem.find(n)!=mem.end()){
if(mem[n]==1){printf("YES\n");continue;}
else{printf("NO\n");continue;}
}
if((n-1)%24==0 && is(n)){
if(pr(sqrt(n))){mem[n]=1;printf("YES\n");continue;}
else{mem[n]=0;printf("NO\n");continue;}
}
mem[n]=0;
printf("NO\n");
}

}
/**
4
2 3 5 9

130 3
 **/
