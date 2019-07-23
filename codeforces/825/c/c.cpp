#include <bits/stdc++.h>
using namespace std;
const int N=1e3+5;
set<long long>st;
long long n,k,tmp,ans;
int main(){
cin>>n>>k;
while(n--){cin>>tmp;st.insert(tmp);}
for(auto x:st){
while(2*k<x){k*=2;ans++;}
k=max(k,x);
}
cout<<ans<<endl;
    return 0;
}
