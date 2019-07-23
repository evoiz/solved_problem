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
string s;
int tmp;
int main(){
cin>>s;
for(int i=0;i<s.length();i++){
	tmp+=(s[i]=='(');
	tmp-=(s[i]==')');
	if(tmp<0){cout<<"IMPOSSIBLE"<<endl;return 0;}
}
cout<<s;
loop(i,1,tmp){cout<<")";}
}
/**
3 2
2 3 5
15
moveLeft
insertLeft 1
moveLeft
print
moveLeft
moveRight
print
moveRight
insertRight 4
moveRight
moveRight
print
moveRight
moveLeft
print
**/