#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
int n,k,x;
map<int , vector<int>> mp;
int main(){
scanf("%d%d",&n,&k);
for(int i=1;i<=n;i++){scanf("%d",&x);mp[x].push_back(i);}
if(mp.size()<k){cout<<"NO\n";return 0;}
int co=0;
cout<<"YES\n";
for(auto x:mp){
        if(co==k){return 0;}
        cout<<*x.S.begin()<<" ";
        co++;
    }
    return 0;
}/**

Nearly prime number is an integer positive number for which it is possible to find such primes P1 and P2
that given number is equal to P1*P2.
 There is given a sequence on N integer positive numbers,
  you are to write a program that prints �Yes� if given number is nearly prime and �No� otherwise.
**/
