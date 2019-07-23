#include <bits/stdc++.h>
using namespace std;
long long a,b,tmp,w1,w2;
int main() {
std::cin.sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
cin>>tmp;
while(tmp--){
    cin>>a>>b;
    w2+=(a>b);
    w1+=(b>a);
}
if(w1>w2){cout<<"Chris"<<endl;return 0;}
if(w2>w1){cout<<"Mishka"<<endl;return 0;}
cout<<"Friendship is magic!^^"<<endl;
	return 0;
}
