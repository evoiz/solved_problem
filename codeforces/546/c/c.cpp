#include <bits/stdc++.h>
using namespace std;
long long n,tmp,a,b,ans,x,y;
queue<long long>aa,bb,ta,tb;
int main() {
scanf("%I64d",&n);
scanf("%I64d",&a);
while(a--){scanf("%I64d",&tmp);aa.push(tmp);}
scanf("%I64d",&b);
while(b--){scanf("%I64d",&tmp);bb.push(tmp);}
while(true){
if( aa.empty() || bb.empty() )break;
ans++;
    x=aa.front();
    aa.pop();
    y=bb.front();
    bb.pop();
if( x>y ){aa.push(y);aa.push(x);}
else{bb.push(x);bb.push(y);}
if(ans==1e6){cout<<-1<<endl;return 0;}
}
 cout<<ans<<" "<<(aa.size()?"1":"2")<<endl;
}
