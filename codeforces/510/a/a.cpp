#include<bits/stdc++.h>
using namespace std;
int a[100];
void des(int x){
for(int i=0;i<x;i++){cout<<"#";}
cout<<endl;
}
void snak_r(int x){
for(int i=0;i<x-1;i++){cout<<".";}
cout<<"#"<<endl;
}
void snak_l(int x){
cout<<"#";
for(int i=0;i<x-1;i++){cout<<".";}
cout<<endl;
}
int main()
{
    bool rol=0;
    int n,m;
 cin>>n>>m;
 for(int i=0;i<n;i++){
  if(i%2==0){des(m);}
  else if(i%2==1 && rol ){snak_l(m);rol=0;}
  else if(i%2==1 && !rol ){snak_r(m);rol=1;}
 }
return 0;
}
/*

1 2

1 4
 3 2
 3 4

*/
