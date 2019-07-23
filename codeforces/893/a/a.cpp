#include <bits/stdc++.h>
using namespace std;
int n,a=1,b=2,tmp;
bool ok=1;
int main(){
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&tmp);
    ok=ok&&(tmp==a || tmp==b);
    if(tmp==a){b=6-(a+b);}
    if(tmp==b){a=6-(a+b);}
   /// cout<<a<<" "<<b<<endl;
}
cout<<(ok?"YES":"NO")<<endl;
return 0;
}
