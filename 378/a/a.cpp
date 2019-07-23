#include<bits/stdc++.h>
using namespace std;
long long a,b,aa,bb,z;
int main(){
cin>>a>>b;
for(int i=1;i<=6;i++){
    if(abs(a-i)<abs(b-i)){aa++;continue;}
    if(abs(a-i)>abs(b-i)){bb++;continue;}
    z++;
}

cout<<aa<<" "<<z<<" "<<bb<<endl;
}
/**
1 2 3 4 5 6
b b 0 a a a
**/
