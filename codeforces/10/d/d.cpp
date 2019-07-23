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
const int N=500+6,oo=1e9+10;
short mem[N][N][N];int a[N],b[N],n,m;
void path(int i,int j,int last){
//cerr<<i<<" "<<j<<" "<<last<<endl;
if(i==n+1 || j==m+1){return ;}
int ans=mem[i][j][last];
 if(a[i]==b[j]&& a[i]>a[last]){
         if(ans==1+mem[i+1][j+1][i]){
            printf("%d ",a[i]);
            path(i+1,j+1,i);
            return ;
         }
    }
    if(ans==mem[i+1][j][last]){path(i+1,j,last);return ;}
    if(ans==mem[i][j+1][last]){path(i,j+1,last);return ;}
}
int main(){
me(a,-1);me(b,-1);
sc(n);
read_arr(a,1,n);
sc(m);
read_arr(b,1,m);
for(int i=n;i>=0;i--){
    for(int j=m;j>=0;j--){
        for(int last=n;last>=0;last--){
            int ans=0;
            if(a[i]==b[j]&& a[i]>a[last] && i>last){ans=max(ans,(int)1+mem[i+1][j+1][i]);}
            ans=max(ans,(int)mem[i+1][j][last]);
            ans=max(ans,(int)mem[i][j+1][last]);
            mem[i][j][last]=max((int)mem[i][j][last],ans);
        }
    }
}
printf("%d\n",mem[1][1][0]);
path(1,1,0);
}
/**
4 3 2 1
**/
