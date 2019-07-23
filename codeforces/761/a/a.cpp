#include <bits/stdc++.h>
using namespace std;
long long a,b;
int main(){
    cin>>a>>b;
    if(!a&&!b){cout<<"NO"<<endl;return 0;}
    if(abs(b-a)==1||b==a){cout<<"YES"<<endl;return 0;}
    cout<<"NO"<<endl;
}

