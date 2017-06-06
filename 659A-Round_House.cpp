#include <bits/stdc++.h>
using namespace std;
int main(){
long long a,b,c;
cin>>a>>b>>c;
cout<<((b-1+c)%a+a)%a+1<<endl;
return 0;
}
