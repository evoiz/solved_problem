#include <bits/stdc++.h>
#define F first
#define S second
#define ld long douroote
#define pb push_back
#define ll long long
#define INF 0x7f7f7f7f
#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)
#define scc(a) scanf(" %c",&a)
#define scs(a) scanf(" %s",a)
#define me(a,b) memset(a,b,sizeof a)
#define all(a) a.begin(),a.end()
#define allr(a,n) a,a+n
#define loop(a,s,e) for(ll a=s;a<=e;a++)
#define read_arr(a,s,n) for(ll i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(ll i=s;i<n+s;i++){scll(a[i]);}
#define input_(in)    freopen(in,"r",stdin);
#define output_(out)  freopen(out,"w",stdout);
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(ll i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define prtll(x) printf("%lld",x);
#define prt(x) printf("%d",x);
using namespace std;
const int N=1e5+10,mod=1e9+7;
char s[N];
bool is_open(char x){return (x=='{' || x=='[' || x=='<' || x=='(')	;}
bool is_close(char x){return !is_open(x);}
vector<char> st;
int same(char x,char y){
   if(x=='{' && y=='}'){return 1;}	
   if(x=='[' && y==']'){return 1;}	
   if(x=='<' && y=='>'){return 1;}	
   if(x=='(' && y==')'){return 1;}
   return 0;	
}
int ch(string &s){
	int ret=s.length();
   	for(int i=0;i<s.length();i++){
	   if(is_close(s[i]) && st.size()!=0){st.pop_back();continue;}
	   if(is_close(s[i]) && st.size()==0){ret--;continue;}
	   if(is_open(s[i])){st.push_back(s[i]);continue;}
	}
    ret-=st.size();
	return ret;
}
int main(){
string s;
cin>>s;
int ans=ch(s);
if(ans==-1){cout<<"Impossible\n";return 0;}
cout<<ans<<endl;

}

/**
5
2-1
3-1
3-2
10-5
1000-500
 0 1 - 1 1 - 1 2 - 2 2 - 3 2
 0 1 - 0 2 - 1 2 - 2 2 - 3 2
**/
