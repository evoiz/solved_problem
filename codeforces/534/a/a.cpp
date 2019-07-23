#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
int x;
cin>>x;
if(x==1){cout<<"1"<<endl<<"1";}
else if(x==2){cout<<"1"<<endl<<"1";}
else if(x==3){cout<<"2"<<endl<<"1"<<" "<<"3"<<endl;}
else{
int a,b;
cout<<x<<endl;
if(x%2==1){a=x;b=x-1;}
else{a=x-1;b=x;}
for(int i=a;i>0;i-=2){cout<<i<<" ";}
for(int i=b;i>1;i-=2){cout<<i<<" ";}
}
return 0;
}
/*
1 = 1 3
0 = 2 4

*/
