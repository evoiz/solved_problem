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
#define prtll(x) printf("%lld",x);
#define prt(x) printf("%d",x);
#define F first
#define S second
#define ld long double
#define ll long long
#define pb push_back
#define sz size
using namespace std;
const int N=1e5+10;
int a[N],b[N],c[N],aa,bb,n;
int main(){
///test();
sc(n);
if(n%2==0){printf("-1\n");return 0;}
if(n==1){printf("0\n0\n0");return 0;}
aa=n/2;bb=(n+1)/2;
for(int i=0;i<n;i++){
a[i]=aa;
b[i]=bb;
c[i]=(aa+bb)%n;
aa++;aa%=n;
bb++;bb%=n;
}
loop(i,0,n-1){printf("%d ",a[i]);}printf("\n");
loop(i,0,n-1){printf("%d ",b[i]);}printf("\n");
loop(i,0,n-1){printf("%d ",c[i]);}printf("\n");
}
/**
0 1 2
1 2 0
1 0 2
**/
