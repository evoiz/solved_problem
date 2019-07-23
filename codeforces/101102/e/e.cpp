#include<bits/stdc++.h>
using namespace std;
int n,m;
int main(){
    scanf("%d",&n);
    while(n--){
        scanf("%d",&m);
        m=(m/5)+(m%5!=0);
        printf("%d\n",m);
    }
}
