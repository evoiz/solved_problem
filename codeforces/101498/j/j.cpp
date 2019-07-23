#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define ld long double
using namespace std;
const int N=1e5+3;
long long t;
int m[N];
void solve(string in){
    int n=0,tmp=0,sum=in.length()+1,x=0;
    for(int i=0;i<in.length();i++){
        if(in[i]==' '){tmp++;m[n++]=tmp;tmp=0;continue;}
        tmp++;
    }tmp++;m[n++]=tmp;
    ///cout<<n<<endl;
    ///for(int i=0;i<n;i++){cout<<m[i]<<" ";}
    tmp=0;
    for(int i=0;i<n-1;i++){
        tmp+=m[i];
        if(sum%tmp==0){
            x=0;
            for(int j=i+1;j<n;j++){
                x+=m[j];
                if(tmp==x){x=0;}
                if(x>tmp){break;}
            }
           if(!x){cout<<"YES"<<endl;return ;}
        }

    }
cout<<"NO"<<endl;
}
string s;
int main()
{
    cin >> t;
    cin.ignore();
    while(t--){
        getline(cin,s);
        solve(s);
    }
    return 0;
}
