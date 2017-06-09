#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
long long t,tmp,con,sum;
int main(){
    scanf("%I64d",&t);
    while(t--){
      cin>>tmp;
      if(tmp>0){con+=tmp;continue;}
      if(con){con--;continue;}
      sum+=abs(tmp);
     }
     cout<<sum<<endl;
}
