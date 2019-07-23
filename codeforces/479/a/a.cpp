#include <iostream>
using namespace std;
int main()
{
int a,b,c;
cin>>a>>b>>c;
int m [4];
m[0]=a*(b+c);
m[1]=(a+b)*c;
m[2]=a+b+c;
m[3]=a*b*c;
int max=m [0];
for (int i=0;i<4 ;i++)
{if(m[i]>max)
max=m[i];}
cout<<max<<endl;
return 0;
}