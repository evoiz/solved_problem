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
string s;
int main(){
loop(i,1,3){
	cin>>s;
	bool ok=0;
	int n=s.length()-1;
	int idx=0;
	loop(j,0,n){
	  if(s[j]=='='){ok=1;s[j]='.';idx=j;break;}
	}
	if(!ok){continue;}
	loop(j,idx+1,n){
	  if(s[j]!='.'){cout<<s[j]<<endl;ok=0;break;}
	}
	if(ok==0){continue;}
	cout<<"You shall pass!!!"<<endl;
}
	
}
