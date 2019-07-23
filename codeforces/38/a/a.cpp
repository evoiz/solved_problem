#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define ll long long
using namespace std;
const int N=1e2+10,mod=7901;
int a[N],n,b,ans,x,y;
int main(){
scanf("%d",&n);
for(int i=1;i<n;i++){scanf("%d",a+i);}
scanf("%d%d",&x,&y);
for(int i=x;i<y;i++){ans+=a[i];}
printf("%d\n",ans);
}
/**
f(t)=((p-l)
**/
