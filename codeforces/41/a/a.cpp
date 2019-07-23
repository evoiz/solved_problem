#include <bits/stdc++.h>
using namespace std;
int main(){
char a1[9999];
cin>>a1;
int i;
for(i=0;a1[i]!='\0';i++);
char a2[i];
cin>>a2;
reverse(a2,a2+i);
//cout<<a1<<endl<<a2;
int fin=0;
for(int j=0;j<i;j++){
if (a1[j]==a2[j]){fin++;}
}
if (fin==i){cout<<"YES";}
else {cout<<"NO";}
return 0;
}
