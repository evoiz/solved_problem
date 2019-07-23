#include <bits/stdc++.h>
using namespace std;
map<int,int>ans;
pair<int ,int>res;
int q,a,b,n,fx,as,tmp;
void ch(int in){
as=0,tmp=0;
int m[12];
memset(m,0,sizeof m);
while(in){
    m[in%10]++;
    in/=10;
}
for(int i=0;i<=10;i++){
  as=max(as,m[i]);
}
for(int i=0;i<=10;i++){
  if(m[i]==as){ans[i]++;}
 }
}
int main(){
scanf("%d",&q);
while(q--){
scanf("%d%d%d",&a,&b,&n);
bool ok=0;
res.second=0;
ans.clear();
for(int x=1;;x++){
        fx=x*x*a+b*x;
        if(fx>n){break;}
        ///cout<<fx<<"\t"<<ch(fx)<<endl;
        ch(fx);
        ok=1;
    }
    if(!ok){printf("-1\n");continue;}
    for(auto x:ans){
           /// cout<<x.first<<"\t"<<x.second<<endl;
        if(x.second>res.second){res.first=x.first;res.second=x.second;}
    }
    printf("%d\n",res.first);
}
return 0;
}
/**

3
1 2 50
20 3 10
1 2 50
**/
