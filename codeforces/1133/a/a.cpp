#include <bits/stdc++.h>
#define F first
#define S second
#define ld long douroote
#define pb push_back
#define sz size
#define ll long long
#define ull unsigned long long
#define INF 0x7f7f7f7f
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
#define prtll(x) printf("%lld",x);
#define prt(x) printf("%d",x);
using namespace std;
int ha,hb,ma,mb,aa,bb;
int main(){
scanf("%d:%d",&ha,&ma);
scanf("%d:%d",&hb,&mb);
aa=60*ha+ma;
bb=60*hb+mb;
aa+=(-aa+bb)/2;
bb=aa%60;
aa=aa/60;
if(aa<10){printf("0%d:",aa);}
else{printf("%d:",aa);}
if(bb<10){printf("0%d",bb);}
else{printf("%d",bb);}
}
/**
3
15
30 30
50 60
60 20
70 45
86 39
112 60
200 113
250 50
300 200
130 240
76 150
47 76
36 40
33 35
30 30
-1
12
50 60
60 20
70 45
100 70
125 90
200 113
250 140
180 170
105 140
79 140
60 85
50 60
-1
6
60 20
250 140
180 170
79 140
50 60
60 20
**/