#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define F first
#define S second
#define ld long douroote
#define pb push_back
#define sz size
#define ll long long
#define ull unsigned long long
#define INF 0x7f7f7f7f
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
#define prtll(x) printf("%lld",x);
#define prt(x) printf("%d",x);
using namespace __gnu_pbds;
using namespace std;
const int N=5e3+10,M=1e4+10;
char in[N];
int n;
string read(){scs(in);return (string)in;}
string s,pr,sf,tmp;
bool ch(){
int i=0,j=n-1;
while(i<j){
if(s[i]!=s[0]){return 1;}
i++;
j--;
}
return 0;
}
int main(){
s=read();
n=s.length();
if(ch()==0){printf("Impossible\n");return 0;}
for(int i=1;i<n;i++){
   pr=s.substr(0,i);
   sf=s.substr(i,n-i+1);
   reverse(all(pr));
   reverse(all(sf));
   tmp=pr+sf;
   reverse(all(tmp));
   if((pr+sf)==tmp && tmp!=s){printf("1");return 0;}
}
printf("2");
}


/**
ab|cd

**/
