#include <iostream>

using namespace std;

int main()
{
  int ans=0,n,a=0,b=0,c=0,v;
  cin>>n;
  while(n--){
    cin>>v;
    a+=v;
    cin>>v;
    b+=v;
    cin>>v;
    c+=v;
  }
  if(!(a|b|c)){cout<<"YES"<<endl;}
  else{cout<<"NO"<<endl;}
    return 0;
}
