#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
map<int ,int> mp;
int mx,n,tmp;
int main(){
cin>>n;for(int i=0;i<n;i++){cin>>tmp;mp[tmp]++;mx=max(mx,mp[tmp]);}
cout<<mx<<endl;
}
/**

5 6 4
******
*..*.*
******
*....*
******
2 2
2 3
2 5
4 3

**/
