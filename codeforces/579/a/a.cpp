#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long co=0;
int b(int x){
if(x==1){return 0;}
if(x%2==1 ){b(x/2);co++;}
if(x%2==0){b(x/2);}
}
int main()
{
long long s,i=1;cin>>s;
b(s);
/*while(s!=1){
if(s%2==1){co++;s--;}
if(s%2==0){co++;s=s/2;}
}*/
cout<<co+1<<endl;
return 0;
}
/*
1 1
2 2
3 3
4 3
5 4
6
9 1 8 4 2 1
3  1 2 1
8  4 2 1
*/
