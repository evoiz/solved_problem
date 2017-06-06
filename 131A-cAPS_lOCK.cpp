#include<iostream>
using namespace std;
bool ch(string in){
for(int i=1;i<in.length();i++){if(in[i]>='a'&& in[i]<='z'){return 0;}}
return 1;
}
void pr(bool ok,string in){
if(!ok){cout<<in<<endl;return ;}
for(int i=0;i<in.length();i++){
        char p;
    if(in[i]>='a'&& in[i]<='z'){p=in[i]-32;cout<<p;}
    if(in[i]>='A'&& in[i]<='Z'){p=in[i]+32;cout<<p;}
}
cout<<endl;
return;
}
int main()
{
    string s;
    cin>>s;
    pr(ch(s),s);

    return 0;
}
