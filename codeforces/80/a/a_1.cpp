#include <iostream>

using namespace std;
bool is(int x){
for(int i=2;i*i<=x;i++){if(x%i==0){return 0;}}
return 1;
}
int main()
{
   int n,m,ans;cin>>n>>m;
   for(int i=n+1;i<100;i++){if(is(i)){ans=i;break;}}
   (m==ans?cout<<"YES"<<endl:cout<<"NO"<<endl);
    return 0;
}

