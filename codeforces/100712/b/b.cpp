#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N = (1e3) + 5;
int mem[N][4],n,t;
string S;
char ch[N];
void prif(){
memset(mem,0,sizeof mem);
int r=0,p=0,s=0;
for(int i=1;i<=n+1;i++){
   r+=(S[i]=='R');p+=(S[i]=='P');s+=(S[i]=='S');
   mem[i][0]=r;mem[i][1]=p;mem[i][2]=s;
}

}
bool ok(int i,int j){
//cout<<i<<" "<<j<<"\t";
int x=mem[i-1][2]-(mem[i-1][1]);
int y=mem[j-1][0]-mem[i-1][0] - (mem[j-1][2]-mem[i-1][2]);
int z=mem[n+1][1]-mem[j-1][1] - (mem[n+1][0]-mem[j-1][0]);
///cout<<(x+y+z)<<endl;
return  (x+y+z)>0;
}
void solve(){
  scanf("%d",&n);
  scanf("%s",ch);
  S=(string )ch;
  S="0"+S+"0"+"0";
  prif();
  int ans=0;
  for(int i=1;i<=n+1;i++){
     for(int j=i;j<=n+1;j++){
       ans+=ok(i,j);
     }
  }
  printf("%d\n",ans);

}
int main(){
    scanf("%d",&t);
    while(t--){solve();}
    return 0;
}
/**
3
3
RPS
**/
