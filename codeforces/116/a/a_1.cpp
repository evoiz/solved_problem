////// acm 12/11/2012 A. Tram
#include <iostream>

using namespace std;

int main()
{
    int n,a,b,all=0,total=0;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>a>>b;
    all=all-a+b;
    if(all>total){
    total=all;
    }
    }
    cout<<total<<endl;
    return 0;
}
