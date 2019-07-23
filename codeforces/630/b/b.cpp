#include <bits/stdc++.h>
using namespace std;
///vector<>v;
///map<long long,long long>mpx,mpy;
///pair<,>p[];
///set<>st;
double pw(double a, int n) {
if(n == 0) return 1;
if(n == 1) return a;
double t = pw(a, n/2);
return t * t * pw(a, n%2);
}
double a,b,ans;
int main(){
    cin>>a>>b;
ans=a*pw(1.000000011,b);
cout<<setprecision(7)<<fixed<<ans<<endl;
}
/**
0 1
1 6
2
10 * 6- 4*6;
**/
