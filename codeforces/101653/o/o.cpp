#include<bits/stdc++.h>
#define ll long long
#define S second
#define F first
using namespace std;
const int N=225;
pair<double,double> p[N];
double INF=1e9;
int t,n,mem[N][N];
int dp(int i,int last){
if(i==n+1){return 0;}
if(mem[i][last]!=-1){return mem[i][last];}
int ans=dp(i+1,last);///leav
if((p[i].F>p[last].F && p[i].S<p[last].S)){ans=max(ans,1+dp(i+1,i));}///take
return mem[i][last]=ans;
}
int main() {
scanf("%d",&t);
p[0].F=-INF,p[0].S=INF;
while(t--){
scanf("%d",&n);
for(int i=1;i<=n;i++){scanf("%lf%lf",&p[i].F,&p[i].S);}
memset(mem,-1,sizeof mem);
printf("%d\n",dp(0,0));
}

}
/**
3
2
1.0 1.0
1.5 0.0
3
1.0 1.0
1.0 1.0
1.0 1.0
6
1.5 0.0
2.0 2.0
2.5 6.0
3.0 5.0
4.0 2.0
10.0 5.5
**/