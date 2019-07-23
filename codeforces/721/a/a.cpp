#include <iostream>

using namespace std;

int main()
{
    int x,tw=0,sl=0;
    cin>>x;
    char a[x];
    cin>>a;
    for(int i=0;i<x;i++){
    if(a[i]=='B'&&a[i+1]=='W')
     tw++;
    }
    if(a[x-1]=='B')
     tw++;
    cout<<tw<<endl;
    for(int i=0;i<x;i++){
    if(a[i]!='W'){
    sl++;
    }
    else{
    if(sl>0)
    cout<<sl<<" ";
    sl=0;
    }
    }
    if(sl>0)
    cout<<sl<<endl;
    return 0;
}
