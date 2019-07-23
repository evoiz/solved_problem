#include <bits/stdc++.h>
using namespace std;
#define  f first
#define s second
int tmp,k,n;
pair <int ,int> m[1003];
vector <int>ans;
int main(){
cin>>n>>k;
for(int i=0;i<n;i++){cin>>m[i].f;m[i].s=i+1;}
sort(m,m+n);
for(int i=0;i<n;i++){
tmp+=m[i].f;
if(tmp>k){break;}
ans.push_back(m[i].s);
}
cout<<ans.size()<<endl;
for(auto x:ans){cout<<x<<" ";}
cout<<endl;
return 0;
}
