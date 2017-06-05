#include <bits/stdc++.h>
using namespace std;
set<long long>st;
long long n,m,sum,tmp;
vector<long long>ans;
int main(){
    cin>>n>>m;
    for(long long i=0;i<n;i++){scanf("%I64d",&tmp);st.insert(tmp);}
    for(long long i=1;i<=m;i++){
        if(st.find(i)!=st.end()){continue;}
                sum+=i;
            if(sum>m){break;}
        ans.push_back(i);
    }
    cout<<ans.size()<<endl;
    for(auto x:ans){cout<<x<<" ";}

return 0;
}
