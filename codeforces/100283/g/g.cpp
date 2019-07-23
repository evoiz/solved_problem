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
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
using namespace std;
const int N=100+6,oo=1e9+10;
int tt,n;
int main(){
freopen("jenga.in","r",stdin);
sc(tt);
for(int t=1;t<=tt;t++){
    sc(n);
    if(n==2 || n%3==2 ||n%3==1){printf("Case %d: Bakkar\n",t);continue;}
    printf("Case %d: Wahdan\n",t);
}
}
/**
**/
