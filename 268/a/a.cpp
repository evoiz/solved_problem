#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,ans=0;
    cin>>x;
    int m1[x],m2[x];
    for(int i=0;i<x;i++){cin>>m1[i]>>m2[i];}
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){if(m1[i]==m2[j]){ans++;}}
    }
    cout<<ans<<endl;
    return 0;
}
