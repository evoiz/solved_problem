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
void go(){
#ifdef Evoiz
 freopen("in.txt","r",stdin);
 #endif
}
const int N=1e6+10;
int  n;
string a,b,c;
int main(){
go();
sc(n);
cin>>a>>b;
a="0"+a+"0";
b="0"+b+"0";
c=a;
loop(i,0,n+1){
  c[i]=(a[i]!=b[i]);	
}
int ans=0;
loop(i,0,n){
   ans+=(c[i]==0 && c[i+1]==1);	
}
cout<<(ans);
}
