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
const int N=2e5+10;
string con[]={"RGB","RBG","BGR","BRG","GBR","GRB"};
void init(){
for(int i=0;i<6;i++){
  while(con[i].length()<=N){con[i]=con[i]+con[i];}
}
}
int n,fr[10],mn=1e9,ind=-1;
string s;
int main(){
init();
cin>>n>>s;
for(int i=0;i<6;i++){
  for(int j=0;j<n;j++){
    fr[i]+=(s[j]!=con[i][j]);
  }
  if(fr[i]<mn){
  mn=min(mn,fr[i]);
  ind=i;
  }
}
cout<<mn<<endl;
for(int i=0;i<n;i++){cout<<con[ind][i];}
}
