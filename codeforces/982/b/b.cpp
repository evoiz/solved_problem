#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=4e5+10,oo=1e9+10;
ll n,ans[N],tmp;
string s;
priority_queue<pair<ll,int> > dull,one;
int main(){
scanf("%lld",&n);
for(int i=1;i<=n;i++){scanf("%lld",&tmp);dull.push({-tmp,i});}
cin>>s;
for(int i=0;i<2*n;i++){
    int ind;
    if(s[i]=='0'){
       ind=dull.top().S;
       tmp=dull.top().F;
       dull.pop();
       ans[i]=ind;
       one.push({-tmp,ind});
       continue;
    }
    if(s[i]=='1'){
       ind=one.top().S;
       ans[i]=ind;
       one.pop();
    }
}
for(int i=0;i<2*n;i++){printf("%d ",ans[i]);}
    return 0;
}
