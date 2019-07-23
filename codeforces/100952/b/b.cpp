#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
long long a,b,t,ans,tmp;
int main(){
scanf("%I64d",&t);
while(t--){
scanf("%I64d%I64d",&a,&b);
ans=0; tmp=1;
while(a >0 && tmp<b){a-=tmp;tmp*=2;ans++;}
(a<0 ? a=0 : a=a);
ans+=(a+b-1)/b;
printf("%I64d\n",ans);
}
    return 0;
}
/**
x * (x+1) = ans *2
x^2 + x - 2*ans=0;
delta = 1+8*ans;
x1=delta+b/2;


 1
1 1
1 1
**/
