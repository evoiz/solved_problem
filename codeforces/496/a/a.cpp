#include <bits/stdc++.h>
using namespace std;
const int N=200;
vector<int> v;
int n,ans=1e5,tmp,last,mx;
int main() {
cin>>n>>last;n--;v.push_back(last);
while(n--){cin>>tmp;v.push_back(tmp);mx=max(mx,tmp-last);last=tmp;}
for(int i=1;i<v.size()-1;i++){
ans=min(ans,max(v[i+1]-v[i-1],mx));
}
cout<<ans<<endl;
return 0;
}
