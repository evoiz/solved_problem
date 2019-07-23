#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
long long a,b,c,t;
const int N=1e6+5;
int ch[N];
int main(){
scanf("%lld",&t);
while(t--){
memset(ch,0,sizeof ch);
scanf("%lld%lld%lld",&c,&a,&b);
long long co=1;
for(int i=a%c,j=b%c;;i=(i+a)%c,j=(j+b)%c,co++){
///cout<<i<<" "<<j<<endl;
ch[i]|=1;ch[j]|=2;
if(ch[i]==3 || ch[j]==3){break;}
}
cout<<co<<endl;
}
    return 0;
}
