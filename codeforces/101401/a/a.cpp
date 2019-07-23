#include <bits/stdc++.h>
using namespace std;
int a,b,c,ans;
int main(){
scanf("%d%d%d",&a,&b,&c);
b+=(a/2);
printf("%d",min(c,b));
return 0;
}
