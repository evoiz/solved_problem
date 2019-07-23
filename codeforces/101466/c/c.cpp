#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
set<pair<long long  ,pair<long long ,long long>>>st;
pair<long long  ,pair<long long ,long long>> t;
long long n,a,b,c,ans,tmp,dx,dy,dz;
int main(){
scanf("%I64d",&n);
n--;
scanf("%I64d%I64d%I64d",&dx,&dy,&dz);
while(n--){
   scanf("%I64d%I64d%I64d",&a,&b,&c);
   ///if(!b&&!c&&!a){continue;}
   a-=dx;b-=dy;c-=dz;
   tmp=__gcd(abs(a),abs(b));
   tmp=__gcd(tmp,abs(c));
   a/=tmp;b/=tmp;c/=tmp;
   t={-a,{-b,-c}};
   if(st.find(t)!=st.end()){continue;}
  //// cout<<a<<" "<<b<<" "<<c<<endl;
   st.insert({a,{b,c}});
 }
 ans=st.size();
 printf("%I64d\n",ans);

}
