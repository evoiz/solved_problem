#include <bits/stdc++.h>
using namespace std;
///vector<pair<int,int>>v;
///map<char,long long>mp;
///pair<,>p[];
///set<int>st[52];
///std::set<int>::iterator itup;
const int N=1e5+5;
long long n,m,ans;
int main(){
cin>>n>>m;
for(int i=1;i<=min(n,m);i++){
    ans+=((max(n,m)+i)/5)-(i/5);
  //// cout<<i<<" "<<ans<<endl;
  }
  cout<<ans<<endl;
}
