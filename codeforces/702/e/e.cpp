#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N =1e5+5,L=40,oo=1e9+7;

ll to[N][L][4],k,n,a[N],ed[N],sum,mn,start,tmp;

int main(){
scanf("%lld%lld",&n,&k);
for(int i=0;i<n;i++){scanf("%lld",a+i);to[i][0][0]=a[i];}
for(int i=0;i<n;i++){scanf("%lld",ed+i);
to[i][0][1]=ed[i];
to[i][0][2]=ed[i];
}
for(int j=1;j<L;j++){
    for(int i=0;i<n;i++){
       to[i][j][0]=to[ to[i][j-1][0] ][j-1][0];
       to[i][j][1]=to[i][j-1][1] + to[ to[i][j-1][0] ][j-1][1];
       to[i][j][2]=min( (to[i][j-1][2]) ,(to[ to[i][j-1][0] ][j-1][2]) );
    }

}

for(int i=0;i<n;i++){
sum=0;mn=oo;start=i;
    for(int j=0;j<L;j++){
        if(k&(1ll<<j)){
           sum+=to[start][j][1];
           mn=min(mn,to[start][j][2]);
           start=to[start][j][0];
       }
    }
    printf("%lld %lld\n",sum,mn);
}

return 0;
}