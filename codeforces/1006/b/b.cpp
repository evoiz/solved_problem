#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
pair<int,int> p[4000];
int n,k,sum;
set<int> ans;
int main() {
cin>>n>>k;
for(int i=1;i<=n;i++){cin>>p[i].F;p[i].S=i;}
sort(p+1,p+n+1);
reverse(p+1,p+n+1);
for(int i=1;i<=k;i++){sum+=p[i].F;ans.insert(p[i].S);}
int tmp=0;
cout<<sum<<endl;
if(k==1){cout<<n<<endl;return 0;}
vector<int> v(ans.begin(),ans.end());
v.pop_back();
v.push_back(n);
cerr<<v.size()<<endl;
cout<<v[0]<< " ";
for(int i=1;i<v.size();i++){cout<<v[i]-v[i-1]<<" ";}
}
