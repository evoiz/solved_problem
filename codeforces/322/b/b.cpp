#include <bits/stdc++.h>
using namespace std;
///vector<>v;
///map<long long,long long>mpx,mpy;
///pair<,>p[];
///set<>st;
long long r,g,b,ans,tmp;
int main(){
cin>>r>>g>>b;
ans=r/3+g/3+b/3;
ans=max(ans,(r>=1&&g>=1&&b>=1)*(1+(r-1)/3+(g-1)/3+(b-1)/3));
ans=max(ans,(r>=2&&g>=2&&b>=2)*(2+(r-2)/3+(g-2)/3+(b-2)/3));
cout<<ans<<endl;
}
/**


**/
