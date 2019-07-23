#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=2e5+6,mod=1e9+7,oo=1e9+10;
int n,a,b,c,t;
double ans[N];
map<double,int> mp;
int main(){
scanf("%d",&t);
for(int i=0;i<t;i++){
scanf(" ( %d + %d )/ %d",&a,&b,&c);
//cerr<<a<<" "<<b<<" "<<c<<endl;
double tmp=(double)(a+b)/c;
ans[i]=tmp;
mp[tmp]++;
}
for(int i=0;i<t;i++){
printf("%d ",mp[ans[i]]);
}
return 0;
}
/**
dp(i)=dp(i-1)+(3*segma(i))
dp(2)=3+(3*3)=12
dp(3)=12+(3*6)=30
dp(4)=30+(3*10)
**/
