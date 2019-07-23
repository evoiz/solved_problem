#include <bits/stdc++.h>
using namespace std;

int main(){
int sz;
cin>>sz;
int m[sz];
for (int i=0;i<sz;i++){cin>>m[i];}
sort(m,m+sz);
int mx=m[sz-1];
int fn=0;
for(int i=0;i<sz;i++){
fn+=mx-m[i];
}
cout<<fn<<endl;
return 0;
}
