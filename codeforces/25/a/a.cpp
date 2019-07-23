#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,even=0,odd=0,eveni,oddi;
 cin>>n;
 int m[n];
 for(int i=0;i<n;i++){
        cin>>m[i];
        if(m[i]%2==0){even++;eveni=i;}
        else{odd++;oddi=i;}
 }
 odd--;even--;
 if(odd){cout<<eveni+1<<endl;return 0;}
 if(even){cout<<oddi+1<<endl;return 0;}
return 0;
}
/*

1 2

1 4
 3 2
 3 4

*/
