#include <bits/stdc++.h>
using namespace std;
long long t,n,a,b,c;
int main(){
scanf("%I64d",&t);
while(t--){
    scanf("%I64d",&n);
    if(n%2){printf("Impossible\n");continue;}
    a=(n/2)*3;
    if(a%2){printf("Impossible\n");continue;}
    a-=a/2;
    if(a%2){printf("Impossible\n");continue;}
    b=(((n/2)*2)+a);
    if(b%2){printf("Impossible\n");continue;}
    b-=b/2;
    c=(n/2)+b;

   printf("%I64d %I64d %I64d\n",c,b,a);
}

return 0;
}
/**
3
5
1 5 3 2 4
5
8 9 10 1 2
6
1 5 3 2 4 10


**/
