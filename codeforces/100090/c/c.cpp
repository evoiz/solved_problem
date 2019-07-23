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
const int N=310;
ll a[N][N],b[N][N],n;
void floyd_paths(){
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++) // this time, we need to use if statement
                if (b[i][k] +b[k][j] <b[i][j]){
                    b[i][j]=b[i][k]+b[k][j];
                }
}
int main(){
scll(n);
loop(i,1,n){
  loop(j,1,n){
	  scll(a[i][j]);
	  b[i][j]=a[i][j];
  }	
}
///cerr<<"-----------\n";
floyd_paths();
loop(i,1,n){
  loop(j,1,n){
	  /**
	  printf("%lld",b[i][j]);
	 if(j<n)printf(" ");
	 else printf("\n");
	 **/
	 if(a[i][j]!=b[i][j]){printf("-1\n");return 0;}	
}
}
//cerr<<"-----------\n";
loop(i,1,n){
  loop(j,1,n){
	 printf("%lld",a[i][j]);
	 if(j<n)printf(" ");
	 else printf("\n");
  }	
  
}
}