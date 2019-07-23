#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
int t,x;
string s;
int main(){
 cin>>t;
 for(int i=0;i<t;i++){
    cin>>s;
    if(s[0]=='+' || s[2]=='+'){x++;}
    if(s[0]=='-' || s[2]=='-'){x--;}

 }
 cout<<x<<endl;
}
