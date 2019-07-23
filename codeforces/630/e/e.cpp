#include <bits/stdc++.h>
using namespace std;
///vector<>v;
///map<long long,long long>mpx,mpy;
///pair<,>p[];
///set<>st;
long long x1,x2,y,y2,ans;
int main(){
cin>>x1>>y>>x2>>y2;
ans= ((y2-y)/2+1)*(x2-x1+1)-(x2-x1)/2;
cout<<ans<<endl;
}
/**
0 1
1 6
2
10 * 6- 4*6;
**/
