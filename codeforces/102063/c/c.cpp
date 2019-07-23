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
#include<bits/stdc++.h>
using namespace std;
string in,word,out,tmp;
int t;
string to(string x){
string ret="";
for(int i=1;i<x.length();i++){ret=ret+x[i];}
char c=tolower(x[0]);
ret=ret+c;
ret=ret+"ay";
return ret;
}
int main(){
cin>>t;
cin.ignore();
while(t--){
out="";
tmp="";
getline(cin,in);
for(int i=0;i<in.length();i++){
 if(in[i]==' '){
  out+=to(tmp);out+=" ";tmp="";continue;}
  tmp+=in[i];
}
if(tmp.length()){out+=to(tmp);}
out[0]=toupper(out[0]);
cout<<out<<endl;
}
}
