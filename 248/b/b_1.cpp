#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

const int N=1e5+5,oo=1e9;
int n ,mem[N][230];
bool dp(int i,int mod){
 if(i==n){return (mod==0);}
  bool ans=0;
  if(mem[i][mod]!=-1){return mem[i][mod];}
  for(int j=0+(i==0);j<10;j++){
    ans|=dp(i+1,(mod*10+j)%210);
  }
  return mem[i][mod]=ans;
}
void path(int i,int mod){
if(i==n){printf("\n");return ;}
  for(int j=0+(i==0);j<10;j++){
    if(dp(i+1,(mod*10+j)%210)){
       printf("%d",j);
       path(i+1,(mod*10+j)%210);
       break;
    }
  }
  return ;
}
int main(){
memset(mem,-1,sizeof mem);
  scanf("%d",&n);
  if(dp(0,0)){path(0,0);return 0;}
  printf("-1\n");
}
