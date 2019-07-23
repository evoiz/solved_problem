#include <bits/stdc++.h>

using namespace std;
int main()
{
  long long n,m;cin>>n>>m;
  if(n%2==0){
  if(m <=n/2 ){cout<<1+(2*(m-1))<<endl;}
  else if(m>n/2){cout<<2*(m-(n/2))<<endl;}
  }
  if(n%2==1){
    if(m<=(n+1)/2){cout<<1+(2*(m-1))<<endl;}
    else if(m>(n+1)/2){cout<<2*(m-((n+1)/2))<<endl;}
}
    return 0;
}