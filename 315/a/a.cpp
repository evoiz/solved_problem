#include<bits/stdc++.h>
using namespace std;
long long n,ans,a,b;
vector<pair<int,int>> v;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    while(n--){cin>>a>>b;v.push_back({a,b});}
    for(int i=0;i<v.size();i++){
        bool ok=1;
        for(int j=0;j<v.size();j++){
            if(i==j){continue;}
            if(v[i].first==v[j].second){ok=0;}
        }
        ans+=ok;
    }
    cout<<ans<<endl;
    return 0;
}
/**
4
1 1
2 2
3 3
4 4
**/
