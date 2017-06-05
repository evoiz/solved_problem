#include <bits/stdc++.h>

using namespace std;
int a,b,c=9,sum;
int main()
{
    cin>>a>>b;
    if(a==1 && b==0){cout<<"0 0"<<endl;return 0;}
    if(!(b<=9*a && b>=1)){cout<<"-1 -1"<<endl;return 0;}
    string mx="",mn="";
    sum=b;
    for(int i=0;i<a;i++){
        if(sum>c){mx+=c+'0';sum-=c;continue;}
        else{c=sum;mx+=c+'0';sum-=c;continue;}
    }
    c=9;
    int n=b-((a-1)*9);
    if(n<0){n=1;}
    sum=b-n;
     for(int i=0;i<a-1;i++){
        if(sum>c){mn+=c+'0';sum-=c;continue;}
        else{c=sum;mn+=c+'0';sum-=c;continue;}
    }
    reverse(mn.begin(),mn.end());
    char nn='0'+n;
    mn=nn+mn;
    cout<<mn<<" "<<mx<<endl;
}
