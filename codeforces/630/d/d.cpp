#include <bits/stdc++.h>
using namespace std;
///vector<>v;
///map<long long,long long>mpx,mpy;
///pair<,>p[];
///set<>st;
const int N=1e6+4;
long long n,ans;
int main(){
cin>>n;
ans=(((n+1)*(n+2)/2)*6)-((n+1)*6)+1;
cout<<ans<<endl;
}
/**
0 1
1 6
2
10 * 6- 4*6;
**/
