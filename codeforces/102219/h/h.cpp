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

// compare 2 real numbers a & b
// return +1 if a > b
// return  0 if a = b
// return -1 if a < b
int cmp(double a,double b){
if( fabs(a-b) < eps )return 0;
if( a-b > eps )return 1;
return -1;
}
point rot(point p,double t){
    return point( p.x*cos(t) - p.y*sin(t) , p.x*sin(t) + p.y*cos(t) );
}

point rotAboutPoint(point p,double t,point q){
    return q+rot(p-q,t);
}

bool cmp1(point a,point b){
    return cmp(a.x,b.x)==-1 ||( cmp(a.x,b.x)==0 && cmp(a.y,b.y)==-1 );
}

vector<point> convexHull(vector<point>pol){
sort(pol.begin(),pol.end(),cmp1);

// remove duplicate points
vector<point>tmp;
tmp.push_back(pol[0]);
int N = pol.size();
for(int i=1;i<N;i++)
    if( !same(pol[i-1],pol[i]) )
        tmp.push_back(pol[i]);
pol=tmp;

N=pol.size();// again
vector<point>up,dn;
for(int i=0;i<N;i++){
        while( dn.size() >=2 && crs(vec(dn[dn.size()-2],dn[dn.size()-1]),vec(dn[dn.size()-1],pol[i])) <0 )
            dn.pop_back();
    dn.push_back(pol[i]);
    }


for(int i=N-1;i>=0;i--){
        while( up.size() >=2 && crs(vec(up[up.size()-2],up[up.size()-1]),vec(up[up.size()-1],pol[i])) <0 )
            up.pop_back();
    up.push_back(pol[i]);
    }

dn.pop_back();
up.pop_back();

vector<point>cvx;
for(auto p:dn)cvx.push_back(p);
for(auto p:up)cvx.push_back(p);
return cvx;
}
/////////////////////////////////////////////////////////////////////////////
bool PointInsidePolygon(const point &P, const vector<point> &poly){
    int n = poly.size();
    bool in = 0;
    
    for(int i = 0,j = n - 1;i < n;j = i++){
        double dx = poly[j].x - poly[i].x;
        double dy = poly[j].y - poly[i].y;
        
        if((poly[i].y <= P.y + eps && P.y < poly[j].y) ||
            (poly[j].y <= P.y + eps && P.y < poly[i].y))
            if(P.x - eps < dx * (P.y-poly[i].y) / dy+poly[i].x)
                in ^= 1;
    }
    
    return in;
}
/////////////////////////////////////////////////////////////////////////////
vector<point> all,ch,cn;
void solve(int t){
	int n,m;
	sc(n);sc(m);
	all.clear();
	ch.clear();
	cn.clear();
    loop(i,1,n){
		point tmp;
		tmp.in();
		all.pb(tmp);
		
	}
	 loop(i,1,m){
		point tmp;
		tmp.in();
		ch.pb(tmp);
	}
	cn=convexHull(all);
	printf("Case %d\n",t);
	for(auto p:cn){
	   printf("%d %d\n",(int)p.x,(int)p.y); 
	}
	printf("%d %d\n",(int)cn[0].x,(int)cn[0].y);
	for(auto p:ch){
		bool ans=PointInsidePolygon(p,cn);
		printf("%d %d ",(int)p.x,(int)p.y);  
		if(ans){printf("is unsafe!\n");}
		else{printf("is safe!\n");}
	}
}
int main() {
int t;
sc(t);
loop(i,1,t){
solve(i);
if(i<t){printf("\n");}	
}

}
    /**
     -12 34 56
    78 -90 123
    **/
