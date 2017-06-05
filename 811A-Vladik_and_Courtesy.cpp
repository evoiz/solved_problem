#include <bits/stdc++.h>
using namespace std;
long long a,b,c=1;
int main() {
cin>>a>>b;
while(true){
if( a-c<0 ){cout<<"Vladik"<<endl;return 0;}
    a-=c;
    c++;
if(b-c<0){cout<<"Valera"<<endl;return 0;}
    b-=c;
    c++;
}
	return 0;
}
