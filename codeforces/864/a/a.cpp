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
using namespace std;
const int N=(1e5)+10;
set<int> fr,ans;
map<int , int> mp;
int n,tmp;
int main(){
sc(n);
for(int i=0;i<n;i++){sc(tmp);ans.insert(tmp);mp[tmp]++;}
for(auto x:mp){
    fr.insert(x.S);
}
if(ans.size()==2 && fr.size()==1){
  printf("YES\n");
  for(auto x:ans){printf("%d ",x);}
  return 0;
}
printf("NO\n");

return 0;
}/**
5
3 2 3 4 3
**/
