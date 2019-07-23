#include<bits/stdc++.h>
using namespace std;
const int N=50;
long long  fib[N],n;
int main(){
fib[0]=0;
fib[1]=1;
scanf("%d",&n);
if(!n){cout<<"0 0 0"<<endl;return 0;}
if(n==2){cout<<"1 1 0\n";return 0;}
for(int i=2;i<=N-3;i++){fib[i]=fib[i-1]+fib[i-2];
if(fib[i]==n){
cout<<fib[max(i-1,0)]<<" "<<fib[max(i-3,0)]<<" "<<fib[max(i-4,0)]<<endl;
break;
}
}
return 0;
}
