#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=2e5+10,oo=1e9+7,mod=1e9+7;
int ans[N],a[N],n;
int main(){
scanf("%d",&n);
for(int i=0;i<n;i++){scanf("%d",a+i);}
int emp=oo;
for(int i=0;i<n;i++){
    if(a[i]==0){emp=1;ans[i]=0;continue;}
    if(emp==oo){ans[i]=oo;continue;}
    ans[i]=emp++;
}
emp=oo;
for(int i=n-1;i>=0;i--){
    if(a[i]==0){emp=1;ans[i]=0;continue;}
    if(emp==oo){ans[i]=min(ans[i],oo);continue;}
    ans[i]=min(ans[i],emp);
    emp++;
}
for(int i=0;i<n;i++){printf("%d ",ans[i]);}
}
/**
1000
5 4
2 1 1 1
ans=
1 1 2 1

1 2 3 2 1 2 3 2

**/
