#include<bits/stdc++.h>
using namespace std;

int mx=0,bd,nh;

int main()
{
bool f=1;
int n,m,ok=0;
cin>>n>>m;
for (int i=0;i<=1000 ;i++){
for (int j=0;j<=1000 ;j++){
if(((i*i)+j==n) && ((j*j)+i==m)){ok++;}
}
}
cout<<ok<<endl;

    return 0;
}