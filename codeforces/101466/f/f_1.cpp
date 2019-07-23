#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
bool ch(long long a,long long b,long long c){
long long mx=max(a,max(c,b));
long long sum=a+b+c-mx;
return mx<sum;
}
long long n,a,b,c;
bool ok=1;
int main(){
scanf("%I64d",&n);
while(n--){
   scanf("%I64d%I64d%I64d",&a,&b,&c);
   ok=ok&&ch(a,b,c);
 }
 if(ok){printf("YES\n");return 0;}
 printf("NO\n");
}
/**
2
10 2 2
2 10 10

**/
