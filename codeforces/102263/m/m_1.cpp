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
const int N=1e5+10;
char s[N];
int fr[30],n;
string out;
int main(){
	scs(s);
	n=strlen(s);
	loop(i,0,n-1){
		fr[s[i]-'a']++;
	}
	int tmp=0;
	loop(i,0,25){
    if(i==25){fr[i]+=tmp;break;}
    int emp=fr[i]+(tmp);
	fr[i]=emp%2;
	tmp=emp/2;
	}
	loop(i,0,25){
	   char c='a'+i;
	   loop(j,1,fr[i]){out+=c;}
	}
	sort(all(out),greater<char>());
	printf("%s\n",out.c_str());
	
}
