#include <bits/stdc++.h>
using namespace std;
const int N=1e6+7;
long long n;
long long sum,tmp;
bool ok=0;
int main(){
scanf("%I64d",&n);
while(n--){scanf("%I64d",&tmp);sum+=tmp;ok=ok||(tmp%2);}
if(sum%2==0 && !ok){printf("Second\n");return 0;}
printf("First\n");return 0;
}
