#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,a,p,mn=9999,sum=0;
   cin>>x;
   for(int i=1;i<=x;i++){
   cin>>a>>p;
  if(p<mn){
  mn=p;
  }
   sum=sum+a*mn;
   ////cout<<sum<<"  "<<mn<<endl;
   }
   cout<<sum<<endl;
    return 0;
}
