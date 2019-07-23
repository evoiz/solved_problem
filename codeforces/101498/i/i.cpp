#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define ld long double
using namespace std;
const int N=2e3+3;
long long a,b,t;
int main(){
scanf("%I64d",&t);
while(t--){
scanf("%I64d%I64d",&a,&b);;
long long n=(a%2||b%2);
if(n){printf("hasan\n");continue;}
printf("abdullah\n");
}
    return 0;
}