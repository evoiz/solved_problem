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
#define pb push_back
#define sz size
#include<bits/stdc++.h>
using namespace std;
int t,nn,xx,rr,ll,yy,mx,cnt,d=-1,qq;
char c;
map<int,pair<int,int> >mp;
vector<pair<int,int> > v;
pair<int,int> mk(int a,int b){
return (make_pair(a,b));
}
int main(){
    sc(qq);
    scc(c);sc(xx);sc(yy);
    qq--;
    if(yy<xx){swap(yy,xx);}
    rr=xx;ll=yy;
    while(qq--){
        scc(c);sc(xx);sc(yy);
        if(yy<xx){swap(yy,xx);}
        if('+'==c){ll=max(ll,yy);rr=max(rr,xx);continue;}
        if(ll<=yy && rr<=xx){printf("YES\n");continue;}
        printf("NO\n");

    }
    return 0;
}
