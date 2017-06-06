#include <iostream>
using namespace std;
int main(){
string test="bbaa";
long long n;
cin>>n;
for(int i=0;i<n;i++){cout<<test[i%4];}
cout<<endl;
return 0;
}
