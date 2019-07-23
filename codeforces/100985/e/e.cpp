#include<bits/stdc++.h>
#define f first
#define s second
using namespace std;
string s;
bool ok=1;
const int N=1e5+5;
int q,n,sum[N],tmp,m[N],a,b;
int main(){
scanf("%d%d",&n,&q);
for(int i=1;i<=n;i++){
scanf("%d",&m[i]);
tmp+=m[i];
sum[i]=tmp;
}
while(q--){
  scanf("%d%d",&a,&b);
  tmp=sum[b]-sum[a-1];
  cout<<(tmp%2?"Nao\n":"Sim\n");
}
return 0;
}
