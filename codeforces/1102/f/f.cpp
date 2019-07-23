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
#include<bits/stdc++.h>
using namespace std;
const int N=10000;
int oo=INT_MAX;
ll n,m,a[20][N];
ll ba[16][16],bb[16][16],mem[1<<16][16];
int main() {
	scll(n);
	scll(m);
	for(int i=0; i<n; ++i){
		for(int j=0; j<m; ++j){scll(a[i][j]);}
    }
	if(n==1){
		ll ret=oo;
		loop(0,m-2,1){ret=min(ret,abs(a[0][i+1]-a[0][i]));}
        printf("%lld\n",ret);
		return 0;
	}
    /****/
    loop(0,n-1,1){
		for(int j=0;j<n;++j){
		  if(i==j){continue;}
				ba[i][j]=oo;
				bb[i][j]=oo;
				for(int k=0;k<m;++k){ba[i][j]=min(ba[i][j],abs(a[i][k]-a[j][k]));}
				for(int k=0;k<m-1;++k){bb[i][j]=min(bb[i][j],abs(a[i][k+1]-a[j][k]));}
          }
    }
     /***/
	ll ret=0;
	for(int s=0;s<n;s++) {
		memset(mem,0,sizeof(mem[0])<<n);mem[1<<s][s]=oo;
		for(int i=1;i<(1<<n);i++){
			if(i>>s&1^1){continue;}
			for(int j=0;j<n;j++){
				if(j==s||i>>j&1^1){continue;}
				int nii=i^1<<j;
				for(int k=0; k<n;k++){
					if(nii>>k&1){mem[i][j]=max(min(mem[nii][k],ba[k][j]),mem[i][j]);}
                }
			}
		}
		loop(0,n-1,1){ret=max(ret,min(mem[(1<<n)-1][i],bb[s][i]));}
	}
     printf("%lld\n",ret);
	return 0;
}
