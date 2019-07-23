#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
#define OO 1e15
///string read(){scanf("%s",ch);return (string ) ch;}

using namespace std;
const int N=1e6+10,oo=1e9;
int n,a[11],mem[N],mn=oo,ind;
int dp(int nn){
if(nn<0){return -oo;}
if(nn<mn){return 0;}
if(mem[nn]!=-1){return mem[nn];}
int ans=0;
for(int i=9;i>=1;i--){ans=max(ans,1+dp(nn-a[i]));}
return mem[nn]=ans;
}
void path(int nn){
if(nn<0){return  ;}
if(nn<mn){return ;}
int res=dp(nn);
for(int i=9;i>=1;i--){
    if(res==1+dp(nn-a[i])){
    printf("%d",i);
    path(nn-a[i]);break;}
    }
    return ;
}
int main(){
    memset(mem,-1,sizeof mem);
    scanf("%d",&n);
    for(int i=1;i<=9;i++){scanf("%d",a+i);mn=min(a[i],mn);}
    for(int i=1;i<=9;i++){if(a[i]==mn){ind=i;}}
    ll ans=dp(n);
    cerr<<ans<<endl;
    if(ans<=0){printf("-1\n");return 0;}
    path(n);
    return 0;
}
/**
3
5 5 5 5 5 5 5 5 5 5
**/
