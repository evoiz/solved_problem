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
int n,pr;
vector<pair<int,int>> a;
bool in(int x,int l,int r){
return (x>l && x<r);	
}
bool in_(int x,int l,int r){
return (x>=l && x<=r);	
}
bool ch(int la,int ra,int lb,int rb){
if(in(la,lb,rb) && !in_(ra,lb,rb)){return 1;} 	
if(in(ra,lb,rb) && !in_(la,lb,rb)){return 1;} 	
if(in(lb,la,ra) && !in_(lb,la,ra)){return 1;} 	
if(in(rb,la,ra) && !in_(rb,la,ra)){return 1;} 	
return 0;
}
int main(){
sc(n);
sc(pr);
loop(i,2,n){
	int tmp;
	sc(tmp);
	a.pb({min(tmp,pr),max(tmp,pr)});
	//////cout<<a[i-2].F<<" "<<a[i-2].S<<endl;
	pr=tmp;
}
n=a.size();
loop(i,0,n-1){
  loop(j,i+1,n-1){
	  if(ch(a[i].F,a[i].S,a[j].F,a[j].S)){
		//////cout<<a[i].F<<" "<<a[i].S<<" "<<a[j].F<<" "<<a[j].S<<endl;
	    printf("yes\n");
	    return 0;
	  }
  }	
}
printf("no\n");
}
