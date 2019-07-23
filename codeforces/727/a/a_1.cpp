#include <bits/stdc++.h>
using namespace std;
long long n,m,cur;
vector <long long> v;
bool ok=0;
void btc(long long i){
if(i>m){return ;}
if(i==m){
cout<<"YES"<<endl;
v.push_back(i);
ok=1;
cout<<v.size()<<endl;
for(auto x:v){cout<<x<<" ";}
return ;
}
///////////////////////
cur=i*2;
v.push_back(i);
btc(cur);
v.pop_back();
//////////////////////
cur=(i*10)+1;
v.push_back(i);
btc(cur);
v.pop_back();
}
int main()
{
cin>>n>>m;
btc(n);
if(!ok){cout<<"NO"<<endl;}
}