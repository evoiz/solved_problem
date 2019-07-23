#include <iostream>
using namespace std;
const int N=10010;
int m[N];
int main(){
long long  n,cur,ans=1;
bool ok=0;
cin>>n;
for(int i=0;i<n;i++){cin>>m[i];}
for(int i=0;i<n;i++){
    if(m[i]==1){
     ok=1;
       cur=1;
       for(int j=i+1;j<n;j++){if(m[j]==1){ans*=cur;break;}cur++;}
    }
}
(!ok?cout<<0<<endl:cout<<ans<<endl);

return 0;
}
