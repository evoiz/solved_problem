/**  elias **/
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
const int N=1e3+10;
const double eps = 1e-10;
const double pi = acos(-1);

struct point{
    double x,y;
    point(){}
    point(double a,double b){ x=a;y=b; }
    void in(){ scanf("%lf %lf",&x,&y); }
    void out(){ printf("{%.9f,%.9f}\n",x,y); }
    double len(){ return hypot(x,y); }
    double len2(){ return x*x+y*y; }
    double angle(){ return atan2(y,x); }
    point operator+(point s){ return point(s.x+x,s.y+y); }
    point operator-(point s){ return point(-s.x+x,-s.y+y); }
    point operator*(double k){ return point(x*k,y*k); }
    point operator/(double k){ return point(x/k,y/k); }
    point  norm(){ return point(x/len(),y/len()); }

};
point vec(point a,point b){ return b-a; }
double dot(point a,point b){ return a.x*b.x + a.y*b.y; }
double crs(point a,point b){ return a.x*b.y - a.y*b.x; }

bool same(point a,point b){
    return fabs( vec(a,b).len() ) <= eps;
}
int cmp(double a,double b){
if( fabs(a-b) < eps )return 0;
if( a-b > eps )return 1;
return -1;
}
double linePointDist(point a,point b,point c){
    return fabs( crs( vec(a,b) , vec(a,c) )/ vec(a,b).len() );
}


point a,b,c;
double ans=1e18;
double x_mn,x_mx,y_mx,y_mn;
int main(){
    a.in();
    b.in();
    c.in();
    x_mx=max(b.x,c.x);
    x_mn=min(b.x,c.x);
    y_mx=max(b.y,c.y);
    y_mn=min(b.y,c.y);
    if(a.x<=x_mx && a.x>=x_mn){
        ans=min(ans,linePointDist(b,point(c.x,b.y),a) );
        ans=min(ans,linePointDist(c,point(b.x,c.y),a) );
    }
    else if(a.y<=y_mx && a.y>=y_mn){
        ans=min(ans,linePointDist(b,point(b.x,c.y),a) );
        ans=min(ans,linePointDist(c,point(c.x,b.y),a) );
    }
    else{
		point ab=vec(a,b);
		point ac=vec(a,c);
		point ad=vec(a,point(b.x,c.y));
		point ae=vec(a,point(c.x,b.y));
        ans=min(ans,ab.len());
        ans=min(ans,ac.len());
        ans=min(ans,ad.len());
        ans=min(ans,ae.len());
    }
    printf("%.3f\n",ans);
    return 0;
}
