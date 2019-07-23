#include <bits/stdc++.h>

using namespace std;

long long t,s,x;
bool ch(long long x){return (!((x-t)%s));}
int main(){
cin>>t>>s>>x;
if(x==t+1 || x<t){cout<<"NO"<<endl;return 0;}
bool ok=ch(x)||ch(x-1);
cout<<(ok?"YES":"NO")<<endl;
    return 0;
}
