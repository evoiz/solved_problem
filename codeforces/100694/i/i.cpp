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
struct point{
   int x,y;
   point(){x=0;y=0;}
   point(int xx,int yy){x=xx;y=yy;}	
}a[N];
string nm[N];
string dir[]={"LEFT","RIGHT","UP","DOWN"};
int dx[]={-1,1,0,0};
int dy[]={0 ,0,1,-1};
char in[N];
inline string scan(){scs(in);return (string)in;}
point g;
int mv=-1,t,n;
int main(){
sc(g.x);sc(g.y);
string tmp=scan();
loop(i,0,3){if(tmp==dir[i]){mv=i;break;}}
sc(n);
loop(i,1,n){
	nm[i]=scan();
	sc(a[i].x);sc(a[i].y);
}

while(true){
g.x+=dx[mv];
g.y+=dy[mv];
t++;
loop(i,1,n){
int len=((abs(a[i].x-g.x)+1)/2)+((abs(a[i].y-g.y)+1)/2);
if (len<=t){printf("%s\n",nm[i].c_str());return 0;}
}
}
}
