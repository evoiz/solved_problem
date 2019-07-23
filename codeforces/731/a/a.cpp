#include <iostream>
#include <cmath>
using namespace std;
int main(){
int sum=0,ad;
char m[110];
cin>>m;
char on='a',tw=m[0];
for(ad=0;m[ad]!='\0';ad++);
for (int i=0;i<ad;i++){
if (abs(tw-on)<=13){sum+=abs(tw-on);}
else {sum+=26-abs(tw-on);}
on=m[i];
tw=m[i+1];
///cout<<sum<<endl;
}
cout<<sum;
return 0;
}