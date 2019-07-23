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
#define ii pair < int , int >
#define LS pair < ll , string >
using namespace std;
const int inf = 1<<30,N =1000100;
ii sg[N<<2];
char a[N];
ii mrg ( ii a, ii b ){int d = min ( a.F , b.S );return make_pair( a.F+b.F-d , a.S+b.S-d );}
void build(int nd,int L,int R){if( L == R ){sg[nd]= ( a[L] == '(' ? make_pair(1,0) : make_pair(0,1));return ;
    }
    int mid = (L+R) >>1;build(nd<<1  ,L , mid);build(nd<<1|1,mid+1,R);sg[nd]= mrg( sg[nd<<1] , sg[nd<<1|1] );
}
void update(int nd,int L,int R,int idx,int val){
    if( L == R ){sg[nd]= ( val == +1 ? make_pair(1,0) : make_pair(0,1));return ;}int mid = (L+R) >>1;
    if( idx<=mid )update(nd<<1  ,  L  ,mid,idx,val);
    else{ update(nd<<1|1,mid+1, R ,idx,val);}
    sg[nd]= mrg( sg[nd<<1] , sg[nd<<1|1] );
}

int cnt,n;
int main(){
sc(n);scs(a+1);build(1,1,n);
     for  (int i = 1  ;i <= n ;i++ ){
        if ( a[i] == '('){update(1,1,n,i,-1);cnt += ( sg[1] == make_pair(0,0) );update(1,1,n,i,+1);}
        else {update(1,1,n,i,+1);cnt += ( sg[1] == make_pair(0,0)  );update(1,1,n,i,-1);}
     }
     printf("%d\n",cnt);
    return 0;
}
