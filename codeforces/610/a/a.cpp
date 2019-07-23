#include <bits/stdc++.h>
using namespace std;
long long n;
int main() {
cin>>n;
if(n%2){cout<<0<<endl;return 0;}
n/=2;
if(n%2){cout<<(n/2)<<endl;return 0;}
cout<<(n/2)-1<<endl;
  return 0;
}