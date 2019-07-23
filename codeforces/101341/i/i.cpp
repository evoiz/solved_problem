/**  elias **/
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
using namespace std;
const int N=1e3+10;
ll a[N][N],b[N][N],c[N][N],r[N],bb[N],cc[N],aa[N],mod=1e9+7,n;
ll a_[N][N],b_[N][N],c_[N][N];
int main(){
scll(n);
loop(i,0,n-1){loop(j,0,n-1){scll(a_[i][j]);}}
loop(i,0,n-1){loop(j,0,n-1){scll(b_[i][j]);}}
loop(i,0,n-1){loop(j,0,n-1){scll(c_[i][j]);}}
rand();
rand();
rand();
rand();
rand();
rand();
srand(time(NULL));
loop(t,0,2){
me(aa,0);
me(bb,0);
me(cc,0);
loop(i,0,n-1){loop(j,0,n-1){a[i][j]=a_[i][j];}}
loop(i,0,n-1){loop(j,0,n-1){b[i][j]=b_[i][j];}}
loop(i,0,n-1){loop(j,0,n-1){c[i][j]=c_[i][j];}}

loop(i,0,n-1){r[i]=rand()%mod;} 
loop(i,0,n-1){
	loop(j,0,n-1){ 
            bb[i]=(bb[i]+b[i][j]*r[j])%mod; 
    }
}
loop(i,0,n-1){
	loop(j,0,n-1){ 
            cc[i]=(cc[i]+c[i][j]*r[j])%mod; 
    }
}
loop(i,0,n-1){
	loop(j,0,n-1){ 
            aa[i]=(aa[i]+a[i][j]*bb[j])%mod; 
    }
}
loop(i,0,n-1){if(aa[i]!=cc[i]){printf("NO\n");return 0;}}
}
printf("YES\n");
}
