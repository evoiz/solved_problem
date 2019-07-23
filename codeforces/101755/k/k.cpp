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
const int N=200000+10;
int n,m,a[N];
bool ok(int x){
  int ret=0;
   loop(i,0,n-1){
     if(a[i]<=ret){ret++;continue;}
     if(x){ret++;x--;}
   }	
	return (ret>=m);
}
int bsr(int l,int h){
  int mid;
  while(l<h){
	  mid=(l+h)>>1;
	  if(ok(mid)){h=mid;}
	  else{l=mid+1;}
  }	
	return l;
}
int main(){
	sc(n);sc(m);
	read_arr(a,0,n);
	int ans=bsr(0,n);
	printf("%d\n",ans);
}
