#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

const int N=1e4,oo=1e9;
char n[100];
ll mem[100][100][3],t,sz;
ll dp(int i,int last,bool ok){
//cout<<i<<" "<<last<<" "<<ok<<endl;
   if(i==sz){return 1;}
   if(mem[i][last][ok]!=-1){return mem[i][last][ok];}
   ll ans=0,lim=n[i]-'0';
   if(!ok){
     for(int j=last;j<=9;j++){
       ans+=dp(i+1,j,0);
     }
   }
   if(ok){
     for(int j=last;j<lim;j++){
       ans+=dp(i+1,j,0);
     }
     ans+=dp(i+1,lim,1);
   }
   return mem[i][last][ok]=ans;
}
bool ch(){
for(int i=1;i<sz;i++){if(n[i]<n[i-1]){return 0;}}
return 1;
}
int main(){
 scanf("%lld",&t);
 while(t--){
  memset(mem,-1,sizeof mem);
  scanf("%s",n);
  sz=strlen(n);
  ll ans=(dp(0,0,1)-1);
  ans-=(!ch())*(ans+1);
  printf("%lld\n",ans);
 }
}
