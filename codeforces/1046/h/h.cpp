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
const int N=1000000+10,M=(1<<26);
int n,tmp,len;
ll ans,fr[30];
map<int , int> mp;
char s[N];
int main(){
sc(n);
loop(1,n,1){
tmp=0;me(fr,0);
scs(s);len=strlen(s);
for(int i=0;i<len;i++){
fr[s[i]-'a']++;
}
for(char c='a';c<='z';c++){if(fr[c-'a']%2){tmp=tmp+(1<<(c-'a'));}}
ans+=1ll*mp[tmp];
for(int i=0;i<26;i++){
    int xx=(1<<i)^tmp;
    ans+=1ll*mp[xx];
}
mp[tmp]++;
}
printf("%lld\n",ans);
return 0;
}
