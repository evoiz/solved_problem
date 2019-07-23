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
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
using namespace std;
const int N=100+6,oo=1e9+10;
set<string> st;
string s,ans;
int mx;
bool ch(string a){
int i=0,j=a.length()-1;
while(i<j){
    if(a[i]!=a[j]){return 0;}
    i++;
    j--;
}
return 1;
}
int main(){
cin>>s;
int n=s.length();
int mask=(1<<n)-1;
for(int i=1;i<=mask;i++){
    string tmp="";
    for(int j=0;j<n;j++){if(i&(1<<j)){tmp=tmp+s[j];}}
    if(ch(tmp)){st.insert(tmp);mx=max(mx,(int)tmp.length());}
}
for(auto x:st){ans=x;}
cout<<ans;
}
/**

16 %15=15
16 %1=0
**/
