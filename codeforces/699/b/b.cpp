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
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define ll long long
using namespace std;
const int N=1e3+10;
char s[N][N];
int n,m,sum,col[N],st[N];
int main(){
sc(n);sc(m);
for(int i=0;i<n;i++){
scs(s[i]);
for(int j=0;j<m;j++){sum+=(s[i][j]=='*');st[i]+=(s[i][j]=='*');col[j]+=(s[i][j]=='*');}
}
//for(int i=0;i<n;i++){cerr<<st[i]<<" ";}cerr<<endl<<endl;
//for(int i=0;i<m;i++){cerr<<col[i]<<" ";}cerr<<endl<<endl;
for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
     int tmp=st[i]+col[j]-(s[i][j]=='*');
     if(tmp==sum){printf("YES\n%d %d\n",i+1,j+1);return 0;}
  }
}
printf("NO\n");
}
