#include <bits/stdc++.h>
using namespace std;
long long n,tmp,ans;
set<long long>st;
int main(){
scanf("%I64d",&n);
for(int i=1;i<=20;i++){
    tmp=(long long )(ceil(pow(2,i)-1))*(ceil(pow(2,i-1)));
    //cout<<tmp<<endl;
    st.insert(tmp);
}
for(auto x:st){
    if(n%x==0){ans=x;}
}
cout<<ans<<endl;
return 0;
}
