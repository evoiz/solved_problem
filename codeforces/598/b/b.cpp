#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=1e3+10;
string shist(string in,int k){
int n=in.length();
k%=n;
if(k==0){return in;}
string a=in.substr(0,n-k);
string b=in.substr(n-k,k);
//reverse(b.begin(),b.end());
return (b+a);
}
string s,a,b,c,d;
int q,l,r,k,n;
int main(){
    cin>>s>>q;
    n=s.length();
    while(q--){
        cin>>l>>r>>k;
        a=s.substr(0,l-1);
        b=s.substr(l-1,r-l+1);
        c=s.substr(r,n-r+1);
       // cerr<<a<<" "<<b<<" "<<c<<endl;
        b=shist(b,k);
        ///cerr<<a<<" "<<b<<" "<<c<<endl;
        s=a+b+c;
        //cout<<s<<endl;
        ///cerr<<endl;
    }
    cout<<s<<endl;
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
