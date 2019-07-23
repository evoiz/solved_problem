#include <bits/stdc++.h>
using namespace std;
int n,m[100100];
bool vis[100100];
int main() {
cin>>n;
for(int i=1;i<=n;i++){cin>>m[i];}
int co=n;
for(int i=1;i<=n;i++){
    vis[m[i]]=1;
while(vis[co]&&co>0){cout<<co-- <<" ";}
cout<<endl;
}
	return 0;
}