//#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
  int x,a1,a2;
  cin>>x>>a1>>a2;
   char m[x];
   cin>>m;
//cout<<m[a1-1]<<endl<<m[a2-1];
  if(m[a1-1]==m[a2-1]){cout<<"0"<<endl;}
else{
int fin,j,i,bd=m[a1-1],nh=m[a2-1];
int ad1=1,ad2=1;
for (i=a1;m[i]!=nh;i++){ad1++;}
for (j=a1-2;m[j]!=nh;j--){ad2++;}
//cout<<ad1<<endl<<ad2<<endl;
fin=min(ad1,ad2);
//cout<<fin<<endl;
if(fin>0){cout <<"1";}
}
return 0;
}