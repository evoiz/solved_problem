#include <iostream>
using namespace std;
int main(){

int x,i;
cin>>x;
for(int j=0;j<x;j++){
char name[190];
cin>>name;
for( i=0;name[i]!='\0';i++);
if(i<=10){
cout<<name<<endl;
}
else
cout<<name[0]<<i-2<<name[i-1]<<endl;
}
return 0;
}