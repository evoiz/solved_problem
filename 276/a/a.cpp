#include <bits/stdc++.h>
using namespace std;

int main()
{
long long n,k,ans=-99999999999,cur,a,b;cin>>n>>k;
while(n--){
    cin>>a>>b;
    if(b>k){cur=a-(b-k);}
    else cur=a;
   ans=max(ans,cur);
}
cout<<ans<<endl;
}
/*

4 9

10 13
4 18
13 3
10 6

*/
