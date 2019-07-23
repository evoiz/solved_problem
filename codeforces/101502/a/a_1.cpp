#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define ld long double
using namespace std;
long long a,b,t,ans;
int main(){
   scanf("%I64d",&t);
   while(t--){
    scanf("%I64d%I64d",&a,&b);
    ans=ceil((a*a)/(a+(a*b/100)));
    printf("%I64d\n",ans);
   }
    return 0;
}
