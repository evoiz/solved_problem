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
using namespace std;
map<string,string > mp;
set<string> st;
int n;
char in[30];
string read(){scs(in);return (string)in;}
int main(){
sc(n);
loop(1,n,1){
string a=read();
string b=read();
if(st.find(b)!=st.end()){continue;}
st.insert(a);
if(mp.find(a)!=mp.end()){mp[b]=mp[a];mp.erase(a);continue;}
mp[b]=a;
}
printf("%d\n",mp.size());
for(auto x:mp){
if(x.S=="_"){continue;}
printf("%s %s\n",x.S.c_str(),x.F.c_str());
}
}
