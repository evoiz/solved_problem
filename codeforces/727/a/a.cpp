#include<bits/stdc++.h>
using namespace std;
vector<long long>v;long long a,b;
long long dfs(long long x){if(x<=a){v.push_back(x);return x;}
if(x%2==0){v.push_back(x);return dfs(x/2);}
if(x%2==1&&x%10==1){v.push_back(x);return dfs(x/10);}
else{return x;}

}
int main()
{cin>>a>>b;
if(dfs(b)==a){cout<<"YES"<<endl;cout<<v.size()<<endl;reverse(v.begin(),v.end());
for(int i=0;i<v.size();i++){cout<<v[i]<<" ";
}
}else cout<<"NO";}
