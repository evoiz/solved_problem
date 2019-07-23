/**two pointer**/
#include <bits/stdc++.h>

using namespace std;
const int N=2e5;
long long sum[N],m[N],n,k,ans=1e9,tmp,tans=1e9;
int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>m[i];
        tmp+=m[i];
        sum[i]=tmp;
    }
for(int i=k;i<=n;i++){
tmp=sum[i]-sum[i-k];
///cout<<i-k<<"="<<" "<<sum[i-k]<<","<<i<<"="<<sum[i]<<" "<<tmp<<endl;
tans=min(tans,tmp);
}
///cout<<tans<<endl;
for(int i=k;i<=n;i++){
tmp=sum[i]-sum[i-k];
///cout<<i-k<<"="<<" "<<sum[i-k]<<","<<i<<"="<<sum[i]<<" "<<tmp<<endl;
if(tmp==tans){ans=i-k+1;break;}
}
cout<<ans<<endl;
    return 0;
}
/**
for(int i=1;i<=n;i++){cout<<sz[i]<<" ";}
cout<<endl;
for(int i=1;i<=n;i++){cout<<so[i]<<" ";}
int nob,i,j;
while(true){
    cin>>nob>>i>>j;
    if(nob==1){cout<<so[j]-so[i-1]<<endl;continue;}
    cout<<sz[j]-sz[i-1]<<endl;
}
**/
