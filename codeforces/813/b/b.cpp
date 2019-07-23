#include <bits/stdc++.h>
using namespace std;
vector<long long > a,b;
set<long long >st;
long long x,y,l,r,tmp=1,ans=0,mn;
int main(){
    cin>>x>>y>>l>>r;
        while(r/x>=tmp){a.push_back(tmp);tmp*=x;}
        a.push_back(tmp);
        tmp=1;
        while(r/y>=tmp){b.push_back(tmp);tmp*=y;}
        b.push_back(tmp);
    for(long long i=0;i<a.size();i++){
        for(long long j=0;j<b.size();j++){
          tmp=a[i]+b[j];
          ///cout<<a[i]<<" "<<b[j]<<endl;
          if(tmp>=l && tmp<= r){st.insert(tmp);}
        }
    }
mn=l-1;
st.insert(r+1);
for(auto x:st){ans=max(ans,x-mn-1);mn=x;}
cout<<ans<<endl;
return 0;
}
/*
na=a-b;
nb=b*2;


*/
