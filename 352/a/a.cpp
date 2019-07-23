#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
int n,tmp,z,f;
int main(){
cin>>n;
while(n--){
cin>>tmp;
(tmp==0?z++:f++);
}
f/=9;
f*=9;
if(!f && z){cout<<0<<endl;return 0;}
if(z&&f){while(f--){cout<<5;}while(z--){cout<<0;}cout<<endl;return 0;}
cout<<-1<<endl;
}