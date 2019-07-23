#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

const int N=(1<<24)+10,oo=1e9;
int mem[N],nxt[N],sol[N],a[N][2];
bool vis[N];
int X,Y,x[30],y[30],q;
vector<int> ns;
int dis(int i,int j){
int yy,xx;
if(j==-1){xx=X;yy=Y;}
else{xx=x[j];yy=y[j];}
int ans=(((x[i]-xx)*(x[i]-xx))+((y[i]-yy)*(y[i]-yy)));
return ans;
}
int dp(int mask){
  if(mask==0){return 0;}
  if(vis[mask]){return  mem[mask];}
  vis[mask]=1;
  int ans=oo;
  for(int i=0;i<q;i++){
     if(mask&(1<<i)){
        if(ans>dp(mask-(1<<i))+2*dis(i,-1)){
           ans=dp(mask-(1<<i))+2*dis(i,-1);
           sol[mask]=1;
           a[mask][0]=i+1;
           nxt[mask]=mask-(1<<i);
        }
     for(int j=i+1;j<q;j++){
         if((mask&(1<<i))&&(mask&(1<<j))){
           if(ans>(dp(mask-(1<<i)-(1<<j))+dis(i,-1)+dis(j,-1)+dis(i,j))){
            ans=dp(mask-(1<<i)-(1<<j))+dis(i,-1)+dis(j,-1)+dis(i,j);
            sol[mask]=2;
            a[mask][0]=i+1;
            a[mask][1]=j+1;
            nxt[mask]=mask-(1<<i)-(1<<j);
           }
         }
     }
     break;
    }
  }
  return mem[mask]=ans;
}
void path(int mask){
if(mask==0){return ;}
if(sol[mask]==1){
   ns.push_back(a[mask][0]);
   ns.push_back(0);
   path(nxt[mask]);
}
else{
   ns.push_back(a[mask][0]);
   ns.push_back(a[mask][1]);
   ns.push_back(0);
   path(nxt[mask]);
}
  return ;
}
int main(){
memset(vis,0,sizeof vis);
  scanf("%d%d%d",&X,&Y,&q);
  for(int i=0;i<q;i++){
    scanf("%d%d",x+i,y+i);
  }
  int mask=(1<<q)-1;
///  cout<<mask<<endl;
  printf("%d\n",dp(mask));
ns.push_back(0);
  path(mask);
  for(int i=0;i<ns.size();i++){
    printf(i==ns.size()-1?"%d\n":"%d ",ns[i]);
  }
}
