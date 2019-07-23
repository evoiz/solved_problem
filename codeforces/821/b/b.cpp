/**math**/
#include <bits/stdc++.h>
using namespace std;
long long m,b,ans,y,tmp;
long long segma(long long x){
return (x*(x+1))/2;
}
int main(){
cin>>m>>b;
for(long long x=0;x<=m*b;x++){
    if(!(x%m)&&(abs(x)>=abs(m)||!x)){
       y=abs(-1*(x/m)+b);
       tmp=((x+1)*segma(y))+((y+1)*segma(x));
       ans=max(ans,tmp);
       ///cout<<ans<<endl;
    }
  }
  cout<<ans<<endl;
}

