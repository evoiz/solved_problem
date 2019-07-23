#include <bits/stdc++.h>
using namespace std;
long long  t,l,r,s;
int main(){
    scanf("%I64d",&t);
    while(t--){
    scanf("%I64d%I64d",&l,&r);
        s=1;
        for(int i=0;i<63;i++){
            if((l|s)>r){break;}
            l|=s;
            s<<=1;
            ///cout<<s<<endl;
        }

        printf("%I64d\n",l);
    }
    return 0;
}
