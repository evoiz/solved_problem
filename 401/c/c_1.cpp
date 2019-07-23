#include <bits/stdc++.h>
#define pb push_back
#define F first
#define S second
using namespace std;
long long a,b;
   string ans;
int main(){
    scanf("%I64d%I64d",&a,&b);
    if(a>b+1 || b>2*(a+1)){cout<<-1<<endl;return 0;}
    long long cur=abs(a+1-b);
    ///cout<<cur<<endl;
    while(a){
        if(b>=a){cout<<1;b--;}
        if(b>=a){cout<<1;b--;}
        cout<<0;
        a--;
    }
    while(b){cout<<1;b--;}
    cout<<endl;
    return 0;
}
