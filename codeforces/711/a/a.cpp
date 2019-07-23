#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
vector<string> v;
int n,ans=-1;
string tmp;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){cin>>tmp;v.push_back(tmp);if(tmp.find("OO")!=string::npos){ans=i;}}
    if(ans==-1){cout<<"NO\n";return 0;}
    cout<<"YES\n";
    int ii=v[ans].find("OO");
    v[ans][ii]='+';v[ans][ii+1]='+';
    for(int i=0;i<n;i++){cout<<v[i]<<endl;}
	return 0;}
/**
testing keyboard
**/
