#include <iostream>
using namespace std;
int main (){
//while(1==1){
    char m[99999];
    cin>>m;int j,bg=0,sm=0;
    for(j=0;m[j]!='\0';j++){
    if(m[j]>='a'&&m[j]<='z'){sm++;}
    if(m[j]>='A'&&m[j]<='Z'){bg++;}}
    //cout<<j<<endl<<sm<<endl<<bg<<endl;
    ////////////////////////////////////////////////
    if(sm >= bg){
    for(int i=0;i<j;i++)
    {if(m[i]>='A'&&m[i]<='Z'){m[i]=m[i]+32;continue;}}
    }
    /////////////////////////////////////////////////////
    if(sm<bg){
    for(int i=0;i<j;i++)
    {if(m[i]>='a'&&m[i]<='z'){m[i]=m[i]-32;continue;}}
    }
    //////////////////////////////////////////
    for(int i=0;i<j;i++){cout<<m[i];}
return 0;
}
