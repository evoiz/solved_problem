#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define ld long double
using namespace std;
int r,d,t,ans,x,y,rc;
bool ch(int x,int y,int rc){
long long  t1=(x*x)+(y*y);
//cout<<t<<"\t"<<(t-rc)<<" "<<(t+rc)<<endl;
double t=sqrt(t1);
bool ok=((t-rc)>=(abs(r-d)) && ((t+rc)<=r));
return ok;
}
int main(){
    scanf("%d%d%d",&r,&d,&t);
    while(t--){
      scanf("%d%d%d",&x,&y,&rc);
      ans+=ch(x,y,rc);
    }
   printf("%d\n",ans);
    return 0;
}
