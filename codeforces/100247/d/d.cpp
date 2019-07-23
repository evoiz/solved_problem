#include <bits/stdc++.h>
using namespace std;
string a[3];
int t;
int main(){
scanf("%d",&t);
cin>>a[0]>>a[1]>>a[2];
for(int i=0;i<t;i++){
if(a[0][i]==a[1][i]){cout<<a[0][i];continue;}
if(a[1][i]==a[2][i]){cout<<a[1][i];continue;}
cout<<a[2][i];
}
cout<<endl;
}
/**

6
needle
turkey
bottle
12
**/
