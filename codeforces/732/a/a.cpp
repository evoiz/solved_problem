#include <iostream>

using namespace std;

int main()
{
    int x,y,i;
    cin>>x>>y;
    for( i=1;i<=10;i++){
    if((i*x)%10==y || (i*x)%10==0){
    break;
    }
    }
    cout<<i<<endl;
    return 0;
}
