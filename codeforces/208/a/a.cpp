#include <bits/stdc++.h>
using namespace std;
int main()
{
char m[999999];
cin>>m;
int j,i,ad=0;
for( j=0;m[j]!='\0';j++);
for (i=0;i<j;i++){
int k;
ad=0;
if(m[i]=='W' && m[i+1]=='U'&& m[i+2]=='B'){i+=2;continue;}
else
for ( k=i;k<j;k++){if(m[k]=='W' && m[k+1]=='U'&& m[k+2]=='B'){break;}else {cout<<m[k];ad++;}}
i=i+ad-1;
cout<<" ";
}
return 0;
}
