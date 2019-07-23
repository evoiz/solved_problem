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
using namespace std;
const int N=200000+10,oo=1e9;ll mod=1e9+7;
char s[N];
int l,r,n;
int main(){
scs(s);n=strlen(s);
l=0;r=n-1;
while(l<r){
if(s[l]!=s[r]){s[r]=s[l];}
l++;
r--;
}
printf("%s\n",s);
}
/**

4
6 3
111000
5 2
11010
3 3
110
3 3
101
**/
