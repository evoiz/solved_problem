#include <iostream>
#include <algorithm>
using namespace std;
char m[102];
char st[5]={'h','e','l','l','o'};
////////////
int main(){
cin>>m;
int s;
for(s=0;m[s]!='\0';s++);
int fd=0;
for(int i=0;i<s;i++){
if (m [i]==st [fd]){fd++;}
if (fd==5){break;}
}
if (fd==5){cout <<"YES"<<endl;}
else
{cout <<"NO"<<endl;}
return 0;
}