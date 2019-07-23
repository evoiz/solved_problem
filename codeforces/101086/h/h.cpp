#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e4+10,INf=1e9+10;
int a,b,c,t;
int main(){
scanf("%d",&t);
while(t--){
    scanf("%d%d",&a,&b);
    c=max(a,b);
    printf("%d\n",c*c);
    }
    return 0;
}
