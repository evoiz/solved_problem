#include <bits/stdc++.h>
/**#include <vector>
#include  <string>
#include  <stdio.h>
#include <iostream>**/
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)
#define scc(a) scanf(" %c",&a)
#define ii pair<int,int>
#define scs(a) scanf(" %s",a)
#define me(a,b) memset(a,b,sizeof a)
#define all(a) a.begin(),a.end()
#define allr(a,n) a,a+n
#define loop(s,e,st) for(int i=s;i<=e;i+=st)
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
///#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define ll long long
using namespace std;
const int N=1e6+5,mod=1e9+7;
char s[N];
int t,len,k,n;
vector<int> v;
int main(){
scll(t);
while(t--){
v.clear();
scs(s);sc (n);
len=strlen(s);k=n;
for(int i=0;i<len;i++){
    while(v.size() && k>0 && (s[i]-'0')<v[v.size()-1]){v.pop_back();k--;}
    v.pb(s [i]-'0');
  }
  while(k--){v.pop_back();}
 for(auto x:v){cout<<x;}
 cout<<endl;
 v.clear ();
 k=n;
 for(int i=0;i<len;i++){
    while(v.size() && k>0 && (s[i]-'0')>v[v.size()-1]){v.pop_back();k--;}
    v.pb(s [i]-'0');
  }
  while(k--){v.pop_back();}
 for(auto x:v){cout<<x;}
 cout<<endl;
}

}