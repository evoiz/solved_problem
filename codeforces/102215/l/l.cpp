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
    point sub(point p2) {return point(x - p2.x, y - p2.y);}
    point add(point p2) {return point(x + p2.x, y + p2.y);}
    point scale(double s) {return point(x*s, y*s);}
};
point vec(point a,point b){ return b-a; }
bool same(point a,point b){
    return fabs( vec(a,b).len() ) <= eps;
}

// compare 2 real numbers a & b
// return +1 if a > b
// return  0 if a = b
// return -1 if a < b
int cmp(double a,double b){
if( fabs(a-b) < eps )return 0;
if( a-b > eps )return 1;
return -1;
}
double dot(point a,point b){ return a.x*b.x + a.y*b.y; }
double crs(point a,point b){ return a.x*b.y - a.y*b.x; }

point ca,cb;
double ra,rb;

int main(){
ca.in();
scanf("%lf",&ra);
cb.in();
scanf("%lf",&rb);
point rra = vec(ca,cb);
point rrb = vec(cb,ca);
point a=ca+(rra.norm()*ra );
point b=cb+(rrb.norm()*rb );
point ab=vec(a,b);
point ans=point((a.x+b.x)/2.0,(a.y+b.y)/2.0);
cout<<setprecision(9)<<fixed<<ans.x<<" "<<ans.y<<" "<<ab.len()/2.0<<endl;

}
/**
 -12 34 56
78 -90 123
**/
