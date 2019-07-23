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
#include<bits/stdc++.h>
using namespace std;
const double eps = 1e-10;
const double pi = acos(-1);

struct point{
   ll  x,y;
    point(){}
    point(ll a,ll b){ x=a;y=b; }
    void in(){ scanf("%lld %lld",&x,&y); }
    void out(){ printf("{%lld ,%lld}\n",x,y);}
    point operator-(point s){ return point(-s.x+x,-s.y+y); }
};

point vec(point a,point b){ return b-a; }
ll crs(point a,point b){ return a.x*b.y - a.y*b.x; }

ll arr(point a,point b,point c){
	ll ret=crs(vec(a,b),vec(b,c));
    if(ret==0){return 2e18;}
	return ret;
}
vector<point> pt;
int main(){
  int n;
  sc(n);
  loop(i,1,n){
	  point tmp;
	  tmp.in();
	  pt.pb(tmp);
  }
  ll mn=4e18;
  for(int i=0;i<pt.size();i++){
	  ll tmp=arr(pt[i],pt[(i+1)%n],pt[(i+2)%n]);
	  mn=min(tmp,mn);
  }  
  cout<<mn<<endl;
}
