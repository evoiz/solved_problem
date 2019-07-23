#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=1e2+10;
string a[N];
map<string,int> mp;
int n;
bool com(string a,string b){
if(a.length()!=b.length()){return a.length()<b.length();}
else{return a.length()<b.length();}
}
int main(){
cin>>n;
for(int i=0;i<n;i++){cin>>a[i];}
sort(a,a+n,com);
for(int i=1;i<n;i++){
        ///cout<<a[i]<<endl;
    for(int j=0;j<i;j++){
        if(a[i].find(a[j])!=string::npos){continue;}
        cout<<"NO\n";
        return 0;
    }
}
cout<<"YES\n";
for(int i=0;i<n;i++){cout<<a[i]<<endl;}
}
/**

Nearly prime number is an integer positive number for which it is possible to find such primes P1 and P2
that given number is equal to P1*P2.
 There is given a sequence on N integer positive numbers,
  you are to write a program that prints �Yes� if given number is nearly prime and �No� otherwise.
**/
