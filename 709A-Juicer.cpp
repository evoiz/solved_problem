#include <bits/stdc++.h>
using namespace std;
int a,b,c,tmp,ans,sum;
int main() {
    cin>>a>>b>>c;
    for(int i=0;i<a;i++){
            cin>>tmp;
           if(tmp>b){continue;}
           sum+=tmp;
           if(sum>c){ans++;sum=0;}
    }
    cout<<ans<<endl;
  return 0;
}
