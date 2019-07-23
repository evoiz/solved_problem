/**two pointer**/
#include <bits/stdc++.h>

using namespace std;
int m[110],sz[110],so[110],nz,no,n,ans,tmp;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>m[i];
        nz+=(m[i]==0);
        no+=(m[i]==1);
        sz[i]=nz;so[i]=no;
    }
for(int i=1;i<=n;i++){
    for(int j=i+1;j<=n;j++){
        tmp=so[n]-so[j-1];
       ///cout<<j<<" "<<n<<" "<<tmp<<" ";
        tmp+=so[i-1];
       /// cout<<1<<" "<<i<<" "<<so[i]<<" ";
        tmp+=sz[j]-sz[i-1];
        ///cout<<"majal "<<sz[j]-sz[i-1]<<endl;
       // tmp-=so[j]-so[i-1];
        ans=max(ans,tmp);
    }
}
if(n==1){cout<<!(m[1])<<endl;return 0;}
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
