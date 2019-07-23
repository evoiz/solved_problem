#include<bits/stdc++.h>
#define f first
#define s second
using namespace std;
string s;
bool ok=1;
const int N=1e6+5;
int n,a[N],b[N],c[N];
long long ac,bc;
int main(){
scanf("%d",&n);
for(int i=0;i<n;i++){scanf("%d",&c[i]);}
for(int i=0;i<n;i++){scanf("%d",&a[i]);}
for(int i=0;i<n;i++){scanf("%d",&b[i]);}
for(int i=0;i<n;i++){
    ac+=(a[i]-c[i])*(a[i]-c[i]);
    bc+=(b[i]-c[i])*(b[i]-c[i]);
}
if(ac<=bc){printf("Yan\n");return 0;}
printf("MaratonIME\n");
return 0;
}
