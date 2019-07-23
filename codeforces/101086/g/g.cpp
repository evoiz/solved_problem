#include <bits/stdc++.h>
using namespace std;
const int N=1e3,INf=1e9;
char a[3][N];
int t,n,ans,tmp;
int main(){
scanf("%d",&t);
while(t--){
    scanf("%d",&n);
    scanf("%s%s%s",a[0],a[1],a[2]);
    ans=-INf;
    for(int i=0;i<3*n;i+=3){
            tmp=0;
            for(int j=0;j<3;j++){
                for(int k=i;k<i+3;k++){tmp+=4*(a[j][k]=='*');}
             }
            ans=max(ans,tmp);
        }
        printf("%d\n",ans);
    }
    return 0;
}
