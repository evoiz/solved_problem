#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
int luck[]={4,7,44,47,74,77,444,447,474,744,777,774,747,477};
int n;
int main(){
cin>>n;
for(int i=0;i<14;i++){
   if(n%luck[i]==0){cout<<"YES\n";return 0;}
}
cout<<"NO\n";
}
