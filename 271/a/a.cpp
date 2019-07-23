#include <iostream>

using namespace std;
bool ch(int in){
int m[4];
for(int i=0;i<4;i++){m[i]=in%10;in/=10;}
if(m[0]==m[1] || m[0]==m[2]||m[0]==m[3]){return 0;}
if(m[1]==m[2] || m[1]==m[3]){return 0;}
if(m[2]==m[3]){return 0;}
return 1;
}
int main()
{
 int sz;
 cin>>sz;
 for(int i=sz+1;i<=90000;i++){
    if(ch(i)){cout<<i<<endl;return 0;}
 }
    return 0;
}
