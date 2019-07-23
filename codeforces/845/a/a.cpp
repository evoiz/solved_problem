#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
const  int N=2e2+5;
int m[N],n;
int main(){
scanf("%d",&n);
for(int i=0;i<2*n;i++){scanf("%d",&m[i]);}
sort(m,m+(2*n),greater<int>());
int tmp=m[n];
for(int i=0;i<n;i++){if(m[i]<=tmp){cout<<"NO"<<endl;return 0;}}
cout<<"YES"<<endl;
}
