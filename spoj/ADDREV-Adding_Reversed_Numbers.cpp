#include <bits/stdc++.h>
using namespace std;
int t;
string a,b,ans;
long long sl(string in){
long long ans=0;
for(auto x:in){ans*=10;ans+=x-'0';}
return ans;
}
int main() {
  scanf("%d", &t);
  while(t--){
        ans.clear();
    cin>>a>>b;
    int cur=0,i=0,tmp;
    for(;i<min(a.size(),b.size());i++){
            tmp=(a[i]-'0')+(b[i]-'0')+cur;
            char c=(tmp%10)+'0';
             ans=ans+c;
            cur=tmp/10;
    }
    string fin;
    (a.size()>b.size()? fin=a:fin=b);
     for(;i<fin.size();i++){
            tmp=(fin[i]-'0')+cur;
            char c=(tmp%10)+'0';
             ans=ans+c;
            cur=tmp/10;
    }
    a.clear();
    while(cur){
            char c=(cur%10)+'0';
        a=a+c;
        cur/=10;
    }
    cout<<sl(ans+a)<<endl;
  }
  return 0;
}
