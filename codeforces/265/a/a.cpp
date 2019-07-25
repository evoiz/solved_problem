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
int cl(char c){
if(c=='R'){return 1;}	
if(c=='G'){return 2;}	
if(c=='B'){return 3;}	
}
int x,y,n,m;
char a[100],b[100];
int main(){
scs(a);n=strlen(a);
scs(b);m=strlen(b);
while(1){
  if(y==m){break;}
  if(x==n){break;}
  if(a[x]!=b[y]){y++;}
  else if(a[x]==b[y]){x++;y++;}
}
printf("%d\n",x+1);
}
