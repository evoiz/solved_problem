#include <bits/stdc++.h>
using namespace std;
///vector<>v;
///map<long long,long long>mpx,mpy;
///pair<,>p[];
///set<>st;
long long pw(long long a, long long n) {
if(n == 0) return 1;
if(n == 1) return a;
long long t = pw(a, n/2);
return t * t * pw(a, n%2);
}
long long n,ans;
int main(){
cin>>n;
ans=pw(2,n+1)-2;
cout<<ans<<endl;
}
/**
0 1
1 6
2
10 * 6- 4*6;
**/
