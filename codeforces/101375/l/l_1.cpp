#include <bits/stdc++.h>
using namespace std;
long long n,sum,ans,tmp;
vector<long long > odd;
int main(){
cin>>n;
while(n--){
        cin>>tmp;
if(tmp%2){odd.push_back(tmp);sum+=tmp;continue;}
ans+=tmp;
}
if(odd.size()%2){sort(odd.begin(),odd.end());sum-=odd[0];}
ans+=sum;
cout<<ans<<endl;
return 0;
}
