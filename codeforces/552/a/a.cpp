#include <bits/stdc++.h>
using namespace std;
int n,x1,y1,x2,y2,ans;
int main(){
cin>>n;
while(n--){
cin>>x1>>y1>>x2>>y2;
ans+=(abs(x2-x1)+1)*(abs(y2-y1)+1);
}
cout<<ans<<endl;
return 0;
}
