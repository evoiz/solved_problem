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
const int N=200000+10;
int mem[N][9],n;
string s[4];
int dp(int pos ,int ok){
  if(pos==n){return (ok==0?2:1);}
  int &ret=mem[pos][ok];
  if(ret!=-1){return ret;}
  ret=0;
  set<char> st;
  int way=0;
  loop(i,0,2){
    st.insert(s[i][pos]);
  }
  for(auto c: st){
	 int can=1,n_ok=0; 
      loop(j,0,2){
		 int ly=(s[j][pos]!=c);
	     if(ly && (ok&(1<<j)) ){can=0;}
	     n_ok+=(ly<<j);  
	  }
	  way+=(can*dp(pos+1,ok|n_ok));
  }
  if(way>1){ret=2;}
  else if(way==1){ret=1;}
  else{ret=0;}
  return ret;
}
vector<char > res;
void path(int pos ,int ok){
  if(pos==n){return ;}
  set<char> st;
  loop(i,0,2){
    st.insert(s[i][pos]);
  }
  for(auto c: st){
	 int can=1,n_ok=0; 
      loop(j,0,2){
		 int ly=(s[j][pos]!=c);
	     if(ly && (ok&(1<<j)) ){can=0;}
	     n_ok+=(ly<<j);  
	  }
	  if(can * dp(pos+1,ok|n_ok)==1){
		  res.pb(c);
		  path(pos+1,ok|n_ok);
		  return;
	  }
  }
  return ;
}
int main(){
cin>>s[0]>>s[1]>>s[2];
n=s[0].length();
me(mem,-1);
int ans=dp(0,0);
if(ans==2){printf("Ambiguous\n");return 0;}
if(ans==0){printf("Impossible\n");return 0;}
path(0,0);
for(auto x:res){
	printf("%c",x);
}
}
