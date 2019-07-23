#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
#define INF 1e9
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>

using namespace std;
const int N=1e5+5,oo=1e9+10;
map<char,int>mp;
string a,b;
int ans;
int main(){
   cin>>a>>b;
   for(auto x:a){mp[x]++;}
   for(auto y:b){mp[y]++;}
   for(auto x:mp){ans+=(x.S%2);}
   printf(ans<=1?"YES\n":"NO\n");
}
