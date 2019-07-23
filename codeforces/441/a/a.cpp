#include<bits/stdc++.h>
using namespace std;
vector <int > v;
int main()
{
int n,k,tmp;
bool ok;
 cin>>n>>k;
for(int c=1;c<=n;c++){
        cin>>tmp;
        ok=0;
        int m[tmp];
        for(int i=0;i<tmp;i++){cin>>m[i];if(m[i]<k){ok=1;}}
        if(ok){v.push_back(c);}
 }
 cout<<v.size()<<endl;
 for(auto x:v){cout<<x<<" ";}
 cout<<endl;
return 0;
}
/*

1 2

1 4
 3 2
 3 4

*/
