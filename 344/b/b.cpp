#include <bits/stdc++.h>
using namespace std;
long long a,b,c,sum;
bool ok;
int main(){
cin>>a>>b>>c;
ok=!(a==0||b==0||c==0||(a+b+c)%2||a>b+c || c>b+a || b>a+c);
if(!ok){cout<<"Impossible"<<endl;return 0;}
sum=a+b+c;
cout<<(sum-2*c)/2<<" "<<(sum-2*a)/2<<" "<<(sum-2*b)/2<<endl;
}
/**

**/
