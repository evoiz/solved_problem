#include <bits/stdc++.h>
using namespace std;
long long t,a,b,ans;
int main(){
scanf("%I64d",&t);
while(t--){
scanf("%I64d %I64d",&a,&b);
ans=a*b;
ans=ans%2;
cout<<(ans?"Hussain":"Hasan")<<endl;
}
return 0;
}

