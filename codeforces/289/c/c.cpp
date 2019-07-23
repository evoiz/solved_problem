#include<bits/stdc++.h>
using namespace std;
int n,k;
string con="ab";
int main(){
cin>>n>>k;
if(n==1 && k==1){cout<<'a'<<endl;return 0;}
if(k>n || k==1){cout<<-1<<endl;return 0;}
for(int i=0;i<(n-k+2);i++){cout<<con[i%2];}
for(char i='c';i<'c'+(k-2);i++){cout<<i;}
cout<<endl;
}
/**
j>>i+2....n
i>>n-2;
1 2 3 0 3
1 3 6 6 9
i=3 j=5;
(1)=sum[i];
(2)=sum[j-1]-sum[i];
(3)=sum[n]-sum[j-1];
**/
