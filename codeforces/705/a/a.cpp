#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    cout<<"I hate ";
    for (int i=2;i<=x;i++){
    cout<<"that ";
    if (i%2==0){cout<<"I love ";}
    else
    cout<<"I hate ";
    }
    cout<<"it "<<endl;
    return 0;
}
