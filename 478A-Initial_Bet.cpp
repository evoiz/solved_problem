#include <bits/stdc++.h>
using namespace std;
int main(){
long long a,b,c,d,e;
cin>>a>>b>>c>>d>>e;
if(!a&&!b&&!c&&!d&&!e){cout<<-1<<endl;return 0;}
if(!((a+b+c+d+e)%5)){cout<<(a+b+c+d+e)/5<<endl;return 0;}
cout<<-1<<endl;
return 0;
}
