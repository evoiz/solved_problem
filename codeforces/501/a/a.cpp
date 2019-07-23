#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
double a,b,c,d,fina,finb;
int main(){
cin>>a>>b>>c>>d;
fina=max(3*a/10,a-(a/250*c));
finb=max(3*b/10,b-(b/250*d));
if(fina>finb){cout<<"Misha"<<endl;return 0;}
if(fina<finb){cout<<"Vasya"<<endl;return 0;}
if(fina==finb){cout<<"Tie"<<endl;return 0;}
    return 0;
}
