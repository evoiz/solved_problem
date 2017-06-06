#include <bits/stdc++.h>
using namespace std;
int main(){
long long t,n;
 cin>>n>>t;
 if(t==10){
    if(n==1){cout<<-1<<endl;return 0;}
    for(int i=1;i<n;i++){cout<<2;}
    cout<<0<<endl;
    return 0;
 }
 for(int i=0;i<n;i++){cout<<t;}
 cout<<endl;
return 0;
}
