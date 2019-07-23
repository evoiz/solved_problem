#include <bits/stdc++.h>
using namespace std;
///vector<pair<int,int>>v;
///map<char,long long>mp;
///pair<,>p[];
///set<int>st[52];
///std::set<int>::iterator itup;
const int N=1e5+5;
long long n,ans;
long long lcm(long long a,long long b,long long c){
return (a*b*c)/(__gcd(a,__gcd(c,b)));
}
int main(){
cin>>n;

if(n==1){cout<<1<<endl;return 0;}
if(n==2){cout<<2<<endl;return 0;}
if(n==3){cout<<6<<endl;return 0;}
if(!(n%2)){if(n%3){ans=n*(n-1)*(n-3);}n--;}
n=n*(n-1)*(n-2);
cout<<max(n,ans)<<endl;
}
