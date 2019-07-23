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
#define ll long long
#include<bits/stdc++.h>
using namespace std;
const int N=3e5+10;
ll n,rr,fr[4],rq[4];
string s;
int main(){
	cin>>n>>s;
	me(fr,0);
	 rr=1ll*n/3;
	 loop(0,n-1,1){fr[s[i]-'0']++;}
	 loop(0,3,1){rq[i]=rr-fr[i];}

	if(rq[0]>0){
		loop(0,n-1,1){
			int tmp=s[i]-'0';
			if(fr[tmp]>rr){fr[tmp]--;s[i] = '0';rq[0]--;}
			if(rq[0]==0){break;}
		}
	}
	if(rq[1]>0){
		loop(0,n-1,1){
			int tmp=s[i]-'0';
			if(tmp==2 && fr[tmp]>rr){fr[tmp]--;s[i] = '1';rq[1]--;
			}
			if(rq[1] == 0)break;
		}
	}

	if(rq[2]>0){
		for(int i=n-1;i>-1;i--){
			int tmp=s[i]-'0';
			if(fr[tmp]>rr){fr[tmp]--;s[i] = '2';rq[2]--;}
			if(rq[2] == 0){break;}
		}
	}
	if(rq[1]>0){
		for(int i=n-1;i>-1;i--){
			int tmp=s[i]-'0';
			if(tmp==0 && fr[tmp]>rr){fr[tmp]--;s[i] = '1';rq[1]--;}
			if(rq[1] == 0) break;
		}
	}
	printf("%s",s.c_str());
	return 0;
}
