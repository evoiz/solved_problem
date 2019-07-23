#include <bits/stdc++.h>
#define F first
#define S second
#define ld long douroote
#define pb push_back
#define ll long long
#define INF 0x7f7f7f7f
#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)
#define scc(a) scanf(" %c",&a)
#define scs(a) scanf(" %s",a)
#define me(a,b) memset(a,b,sizeof a)
#define all(a) a.begin(),a.end()
#define allr(a,n) a,a+n
#define loop(a,s,e) for(ll a=s;a<=e;a++)
#define read_arr(a,s,n) for(ll i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(ll i=s;i<n+s;i++){scll(a[i]);}
#define open(in,out) freopen(in,"r",stdin);freopen(out,"w",stdout);
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(ll i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define prtll(x) printf("%lld",x);
#define prt(x) printf("%d",x);
using namespace std;
const int N=1e7+10;
const double EPS = 1E-9;

struct pt {
    double x, y;
    pt(){}
    pt(double a,double b){x=a,y=b;}
};

struct seg {
    pt p, q;
    int id;
    seg(){}
    seg(pt a , pt b){p=a,q=b;}
    double get_y(double x) const {
        if (abs(p.x - q.x) < EPS)
            return p.y;
        return p.y + (q.y - p.y) * (x - p.x) / (q.x - p.x);
    }
};

bool intersect1d(double l1, double r1, double l2, double r2) {
    if (l1 > r1)
        swap(l1, r1);
    if (l2 > r2)
        swap(l2, r2);
    return max(l1, l2) <= min(r1, r2) + EPS;
}

int vec(const pt& a, const pt& b, const pt& c) {
    double s = (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
    return abs(s) < EPS ? 0 : s > 0 ? +1 : -1;
}

bool intersect(const seg& a, const seg& b)
{
    return intersect1d(a.p.x, a.q.x, b.p.x, b.q.x) &&
           intersect1d(a.p.y, a.q.y, b.p.y, b.q.y) &&
           vec(a.p, a.q, b.p) * vec(a.p, a.q, b.q) <= 0 &&
           vec(b.p, b.q, a.p) * vec(b.p, b.q, a.q) <= 0;
}

bool operator<(const seg& a, const seg& b)
{
    double x = max(min(a.p.x, a.q.x), min(b.p.x, b.q.x));
    return a.get_y(x) < b.get_y(x) - EPS;
}

struct event {
    double x;
    int tp, id;

    event() {}
    event(double x, int tp, int id) : x(x), tp(tp), id(id) {}

    bool operator<(const event& e) const {
        if (abs(x - e.x) > EPS)
            return x < e.x;
        return tp > e.tp;
    }
};

set<seg> s;
vector<set<seg>::iterator> where;

set<seg>::iterator prev(set<seg>::iterator it) {
    return it == s.begin() ? s.end() : --it;
}

set<seg>::iterator next(set<seg>::iterator it) {
    return ++it;
}
vector<seg> v,h,a;
bool ok(){
    int n = (int)a.size();
    vector<event> e;
    for (int i = 0; i < n; ++i) {
        e.push_back(event(min(a[i].p.x, a[i].q.x), +1, i));
        e.push_back(event(max(a[i].p.x, a[i].q.x), -1, i));
    }
    sort(e.begin(), e.end());

    s.clear();
    where.resize(a.size());
    for (size_t i = 0; i < e.size(); ++i) {
        int id = e[i].id;
        if (e[i].tp == +1) {
            set<seg>::iterator nxt = s.lower_bound(a[id]), prv = prev(nxt);
            if (nxt != s.end() && intersect(*nxt, a[id])){return 1;}
            if (prv != s.end() && intersect(*prv, a[id])){return 1;}
            where[id] = s.insert(nxt, a[id]);
        } else {
            set<seg>::iterator nxt = next(where[id]), prv = prev(where[id]);
            if (nxt != s.end() && prv != s.end() && intersect(*nxt, *prv))
                return 1; 
            s.erase(where[id]);
        }
    }

    return 0;
}
void build(int l){
a.clear();
for(auto sg:h){
	if(abs(sg.p.x-sg.q.x)<2*l){continue;}
	seg tmp=seg(pt(1.0*sg.p.x+l,sg.p.y),pt(1.0*sg.q.x-l,sg.q.y));
	a.pb(tmp);
}	
for(auto sg:v){
	if(abs(sg.p.y-sg.q.y)<2*l){continue;}
	seg tmp=seg(pt(1.0*sg.p.x,sg.p.y+l),pt(1.0*sg.q.x,sg.q.y-l));
	a.pb(tmp);
}

}
int bsr(int l,int h){
	int mid;
	while(l<h){
		mid=(l+h+1)>>1;
		//cerr<<mid<<endl;
		if(mid==0){return 0;}
		build(mid);
		if(ok()){l=mid;}
		else{h=mid-1;}
	}
	return l;
}
void solve(){
	int n,m;
	sc(n);sc(m);
	v.clear();
	h.clear();
	loop(i,1,n){
	  int xa,xb,y;
	   sc(xa);sc(xb);sc(y);	
	   if(xa>xb){swap(xa,xb);}
	   h.pb( seg(pt(xa,y),pt(xb,y)) );
	}
	loop(i,1,m){
	  int ya,yb,x;
	   sc(ya);sc(yb);sc(x);
	   if(ya>yb){swap(ya,yb);}
	   v.pb( seg(pt(x,ya),pt(x,yb)) );
	}	
	int ans=bsr(0,1e5+1);
	printf("%d\n",ans);
}
int main(){
int t;
sc(t);
while(t--){
  solve();
}
}
/**
1
3 2
1 5 3
2 4 2
6 12 6
1 5 3
6 9 2

 **/
