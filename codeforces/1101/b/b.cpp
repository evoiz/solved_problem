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
const int N=500010;
char ss[N];
int n,ll,rr,cnt;
int main() {
    scs(ss);
    n=strlen(ss);
    rr=n-1;
	while(rr>ll && ss[ll]!='['){ll++;}
	while(rr>ll && ss[ll]!=':'){ll++;}
	while(rr>-1 && ss[rr]!=']'){rr--;}
	while(rr>-1 && ss[rr]!=':'){rr--;}
	if(ll<rr){cnt=4;}
	else{
	printf("-1\n");
	return 0;
	}
	while(rr>ll){
	cnt+=(ss[ll++]=='|');
    }
    printf("%d\n",cnt);

	return 0;
}
