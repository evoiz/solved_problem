#include <bits/stdc++.h>
using namespace std;
char m[3][3];
bool ok;
bool ch(){
    string a,b;
    for(int i=0;i<3;i++){a+=m[i][0];b+=m[i][2];}
    reverse(b.begin(),b.end());
    if(a!=b){return 0;}
    a.clear();
    b.clear();
     for(int i=0;i<3;i++){a+=m[0][i];b+=m[2][i];}
    reverse(b.begin(),b.end());
    if(a!=b){return 0;}
    return 1;
}
int main(){
for(int i=0;i<3;i++){cin>>m[i];}
cout<<(ch()?"YES":"NO")<<endl;
}
