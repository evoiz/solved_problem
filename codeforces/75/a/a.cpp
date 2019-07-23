#include <bits/stdc++.h>
using namespace std;
int a,b;
int num(int x){
int pow_of_ten=1;
int ans=0;
while(x!=0){

  if(x%10!=0){
    ans+=(x%10)*pow_of_ten;
    pow_of_ten*=10;
  }
  x/=10;
}
return ans;
}
int main(){
cin>>a>>b;
if(num(a)+num(b)==num(a+b)){
  cout<<"YES\n";
}
else{
  cout<<"NO\n";
}
return 0;
}
