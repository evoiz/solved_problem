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
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=2e5+10;
int n,uu[N],vv[N],l;
bool ch[N];
vector<int>anss;

int main(){
    sc(n);
   loop(1,n,1){sc(uu[i]);sc(vv[i]);}
   anss.pb(1);ch[1]=1;l=1;
    while(true){
        if(anss.sz()==n){break;}
        int xx=uu[l],yy=vv[l];
        if(uu[xx]==yy||vv[xx]==yy){
            if (!ch[xx]){ch[xx]=1;anss.pb(xx);}
            if (!ch[yy]){ch[yy]=1;anss.pb(yy);}
            l=yy;
        }
        else{
            if (!ch[yy]){ch[yy]=1;anss.pb(yy);}
            if (!ch[xx]){ch[xx]=1;anss.pb(xx);}
            l=xx;
        }
    }
    for (auto z:anss)cout <<z<< ' ';
    cout << endl;
    return 0;
}
