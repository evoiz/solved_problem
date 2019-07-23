#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
#define OO 1e9

using namespace std;
const int N=(1<<18)+10,oo=1e9+10;
string s;
char ch[20];
ll mem[N][104][2],n,l,m;
ll dp(int mask,int mod,bool ok){
if(mask==0 && (mod%m)==0){return 1;}
if(mask==0){return 0;}
if(mem[mask][mod][ok]!=-1){return mem[mask][mod][ok];}
ll ans=0;
int vis=(1<<10)-1;
for(int i=0;i<l;i++){
  if((mask&(1<<i) )&& (vis & (1<<(s[i]-'0') )) ){
                  if(!ok && s[i]=='0'){continue ;}
                  int nw=mask-(1<<i);
                  vis-=(1<<(s[i]-'0'));
                  int nm=((mod*10)+(s[i]-'0'))%m;
                  bool ch=(s[i]!='0') || ok;
                  ans+=dp(nw,nm,ch);
                  }
 }
return mem[mask][mod][ok]=ans;
}
string read(){scanf("%s",ch) ;return (string)ch;}
int main(){
memset(mem,-1,sizeof mem);
s=read();
scanf("%lld",&m);
l=s.length();
ll mask=(1ll<<l)-1;
cerr<<mask<<endl;
cerr<<"done"<<endl;
ll ans=dp(mask,0,0);
printf("%lld",ans);
return 0;
}
/**
3 3 3

1 2 3

1 2 1
1 3 2
2 3 4

1 2
1 3
2 3



**/
