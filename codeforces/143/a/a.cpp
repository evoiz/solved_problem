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
const int N=3e5+10;
int main(){
	int ra,rb,ca,cb,da,db;
	sc(ra);sc(rb);
	sc(ca);sc(cb);
	sc(da);sc(db);
	loop(a,1,9){
		loop(b,1,9){
			loop(c,1,9){
				loop(d,1,9){
					if(a==b || a==c || a==d || b==c || b==d ||  c==d ){continue;}
					int ok=1;
					ok=ok&&(a+b==ra);
					ok=ok&&(c+d==rb);
					ok=ok&&(a+c==ca);
					ok=ok&&(b+d==cb);
					ok=ok&&(a+d==da);
					ok=ok&&(b+c==db);
					if(ok){
						printf("%lld %lld\n%lld %lld\n",a,b,c,d);
						return 0;
					}
					
				}
		    }
		 }
	}
	printf("-1\n");
}
