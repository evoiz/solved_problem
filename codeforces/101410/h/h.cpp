#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N =1e5+5,L=40,oo=1e9+7;

int  n,k,to[N][L],a[N],b[N],x,y,tmp,start;

int main(){
freopen("kids.in","r",stdin);
freopen("kids.out","w",stdout);

scanf("%d%d",&n,&k);
for(int i=0;i<n;i++){scanf("%d%d",&x,&y);a[x]=i+1;b[i+1]=x;to[x][0]=y;}
for(int j=1;j<L;j++){
    for(int i=1;i<=n;i++){
       to[i][j]=to[ to[i][j-1] ][j-1];
    }
}
while(k--){
scanf("%d%d",&x,&y);
start=b[x];
    for(int j=0;j<L;j++){
        if(y&(1ll<<j)){
           start=to[start][j];
       }
    }
    printf("%d\n",a[start]);
}

return 0;
}
