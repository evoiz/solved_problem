#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=2e5+19;
string s;
int mem[120];
int  main(){
cin>>s;
for(int i=1;i<s.length()-1;i++){
        if(s[i]=='A'){mem[i-1]|=1;mem[i+1]|=1;mem[i]|=1;}
        if(s[i]=='B'){mem[i-1]|=2;mem[i+1]|=2;mem[i]|=2;}
        if(s[i]=='C'){mem[i-1]|=4;mem[i+1]|=4;mem[i]|=4;}
}
if(s[0]=='A'){mem[1]|=1;mem[0]|=1;}
if(s[0]=='B'){mem[1]|=2;mem[0]|=2;}
if(s[0]=='C'){mem[1]|=4;mem[0]|=4;}
if(s[s.length()-1]=='A'){mem[s.length()-2]|=1;mem[s.length()-1]|=1;}
if(s[s.length()-1]=='B'){mem[s.length()-2]|=2;mem[s.length()-1]|=2;}
if(s[s.length()-1]=='C'){mem[s.length()-2]|=4;mem[s.length()-1]|=4;}
for(int i=0;i<s.length();i++){if(mem[i]==7){cout<<"Yes\n";return 0;}}cerr<<endl;
cout<<"No\n";
}
/**
3
6 6 6
12
3 14 15 92 65 35 89 79 32 38 46 26
12
3 1 4 1 5 9 2 6 5 3 5 9
7
2 7 1 8 2 8 1
4
1 6 1 8
11
1 2 4 8 16 32 16 8 4 2 1
6
1 2 3 1 2 3
**/
