#include <bits/stdc++.h>

using namespace std;
const int N=1e5+7;
long long  az,bz,ai,bi,a[N],b[N];
int main(){
cin>>az>>bz>>ai>>bi;
for(int i=0;i<az;i++){cin>>a[i];}
for(int i=0;i<bz;i++){cin>>b[i];}
///cout<<a[ai-1]<<"\t"<<b[bz-bi]<<endl;
bool ok=(a[ai-1]<b[bz-bi]);
cout<<(ok?"YES":"NO")<<endl;
}
