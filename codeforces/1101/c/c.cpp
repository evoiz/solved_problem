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

ll mod= 1e9+7;
int t,nn,xx,yy,mx,cnt,d=-1;
map<int,pair<int,int> >mp;
vector<pair<int,int> > v;
pair<int,int> mk(int a,int b){
return (make_pair(a,b));
}
int main(){
   sc(t);
    while(t--){
       v.clear();
       sc(nn);mp.clear();mx=-2;
        loop(i,0,nn-1){
            sc(xx);sc(yy);
            v.pb(mk(xx,yy));
            mx=max(yy,mx);
            if(mp.find(xx)==mp.end()){mp[xx]=mk(0,0);}
            if(mp.find(yy)==mp.end()){mp[yy]=mk(0,0);}
            mp[yy].S++;
            mp[xx].F++;
        }
        cnt=0;d=-1;
        for(auto &x:mp){
            cnt-=x.S.S;cnt+=x.S.F;
            if(d==-1 && mx!=x.F && (!cnt)){d=x.F;}
        }
        if(d==-1){printf("-1\n");continue;}
        for(auto &x:v){
        		if(x.S<=d){printf("1 ");continue;}
        		printf("2 ");
        	}
      printf("\n");
    }
    return 0;
}
