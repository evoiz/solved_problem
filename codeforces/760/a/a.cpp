#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
using namespace std;
int main()

{
//while(1==1){
int a,b,all;
cin>>a>>b;
if(a==1||a==3||a==5||a==7||a==8||a==10||a==12){all=5;if((b)>5){all++;}}
else if(a==2){all=4;if((b)>1){all++;}}
else {all=5;if((b)>6){all++;}}

cout<<all<<endl;//}
return 0;
}