#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define ld long double
using namespace std;
long long t,a,b,c,d;
double t1,t2;
int main(){
   scanf("%I64d",&t);
   while(t--){
    scanf("%I64d%I64d%I64d%I64d",&a,&b,&c,&d);
    t1=b*log(a);t2=d*log(c);
    if(t1>t2){printf(">\n");continue;}
    printf("<\n");
   }
    return 0;
}
