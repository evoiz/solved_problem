#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 0x3f3f3f3f
#define maxn 100005
long long  n,a,b,x,y;
int main(){
       scanf("%I64d%I64d%I64d",&n,&a,&b);
       for(int i=0;i*a<=n;i++){
        if((n-(i*a))%b==0){cout<<"YES"<<endl<<i<<" "<<(n-(i*a))/b<<endl;return 0;}
       }
       cout<<"NO"<<endl;

    return 0;
}
/**
**/
