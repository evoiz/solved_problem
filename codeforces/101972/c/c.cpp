#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
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
#define loop(s,e,st) for(int i=s;i<=e;i+=st)
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
using namespace std;
const int N=1e5+4;ll inf=1e9;
double a,b,c,x;
int t;
double len(double xa,double ya,double xb,double yb){
double ans=1.0*((xa-xb)*(xa-xb))+((ya-yb)*(ya-yb));
ans=1.0*sqrt(ans);
return ans;
}
int main(){
sc(t);
while(t--){
double ans=0;
scanf("%lf %lf %lf %lf",&a,&b,&c,&x);
double bc=1.0*a*(b+c)/(b+c+c);
double ab=a-bc;
//cout<<ab/bc<<" "<<c/(b+c)<<endl;
///cout<<ab<<" "<<bc<<" "<<(c/(b+c))<<endl;
ans+=sqrt(1.0*(c*c)+(ab*ab));
ans+=sqrt(1.0*((c+b)*(c+b))+(bc*bc));
//////////////////////////////////////
double ln=sqrt((a*a)+(b*b));
double yz=1.0*x*ln/100;
//cout<<yz<<" "<<ln<<endl;
double x_=(b*(ln-yz)/(ln));
///cout<<x_<<endl;
a=(x_*a/b);
x_+=c;
bc=1.0*a*(x_)/(x_+c);
ab=a-bc;
ans+=yz;
ans+=sqrt(1.0*(c*c)+(ab*ab));
ans+=sqrt(1.0*((x_)*(x_))+(bc*bc));
printf("%.9lf\n",ans);
}
return 0;
}
/**
2
6 2 3 50
6 2 3 18


ab/bc=c/(b+c)
(ab+bc)/(bc)=(c+b+c)/(b+c)
(a)/bc=(b+c+c)/(b+c);
bc=a*(b+c)/(b+c+c)

d   yz
100 ln

yz=x*ln/100;

yk/(zl)=xy/xz;
yk=zl*xy/xz;
yk=b*(ln-yz)/(ln)

x_/b=xk/a

ab/bc=c/(x_)

**/
