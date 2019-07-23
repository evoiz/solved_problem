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
scanf("%I64d",&a);
(a==1 ? printf("Bob\n"): printf("Alice\n"));
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
