#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define ll long long
using namespace std;
int a,b,q,l,r;
set<int> aa,bb;
vector<int> ans;
int main(){
scanf("%d %d",&a,&b);
for(int i=1;i*i<=a;i++){if(a%i==0){aa.insert(i);aa.insert(a/i);}}
for(int i=1;i*i<=b;i++){if(b%i==0){bb.insert(i);bb.insert(b/i);}}
for(auto x:aa){if(bb.find(x)!=bb.end()){ans.push_back(x);}}
for(auto x:ans){cerr<<x<<" ";}cerr<<endl;
scanf("%d",&q);
while(q--){
scanf("%d%d",&l,&r);
int res=upper_bound(ans.begin(),ans.end(),r)-ans.begin();
res--;
if(ans[res]<l){printf("-1\n");continue;}
printf("%d\n",ans[res]);
}

}
