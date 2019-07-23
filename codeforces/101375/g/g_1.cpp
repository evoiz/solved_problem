#include <bits/stdc++.h>
using namespace std;
long long A,B,C,D,n,tmp;
int main(){
cin>>n;
for(int i=0;i<n;i++){
    cin>>tmp;
  if(i%4==0){A+=tmp;}
  if(i%4==1){B+=tmp;}
  if(i%4==2){C+=tmp;}
  if(i%4==3){D+=tmp;}
}
tmp=max(A,max(B,max(C,D)));
if(tmp==A){cout<<"A"<<endl;return 0;}
if(tmp==B){cout<<"B"<<endl;return 0;}
if(tmp==C){cout<<"C"<<endl;return 0;}
if(tmp==D){cout<<"D"<<endl;return 0;}
return 0;
}
