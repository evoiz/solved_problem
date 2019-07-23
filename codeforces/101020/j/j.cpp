#include <bits/stdc++.h>
using namespace std;
long long n,gcd,a,b;
int main(){
scanf("%I64d",&n);
while(n--){
scanf("%I64d %I64d",&a,&b);
gcd=__gcd(a,b);
cout<<(gcd==1?"GOOD\n":"NOT GOOD\n");
}
return 0;
}
