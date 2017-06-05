#include<bits/stdc++.h>
using namespace std;
long long n,k,m,tmp,ans=1e5;

int main()
{
    cin>>n>>m>>k;
    m--;
   for(int i=0;i<n;i++){
    cin>>tmp;
    if(tmp<=k&& tmp){ans=min(ans,abs(m-i));}
   }
   cout<<ans*10<<endl;
        return 0;

}
