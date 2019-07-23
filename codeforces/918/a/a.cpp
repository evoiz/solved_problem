#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n;
bool isPerfectSquare(int x){
int s = sqrt(x);
return (s*s == x);
}
bool isFibonacci(int n){
///Returns true if n is a Fibinacci Number, else false
return isPerfectSquare(5*n*n + 4) ||
isPerfectSquare(5*n*n - 4);
}
string ans;
int main(){
scanf("%d",&n);
for(int i=1;i<=n;i++){
printf(isFibonacci(i)? "O":"o");
}
printf("\n");
    return 0;
}
/**
112233
(y)
456-654
**/
