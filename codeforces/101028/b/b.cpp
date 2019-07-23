#include <bits/stdc++.h>
using namespace std;
int t;
string a,b;
int main(){
scanf("%d",&t);
while(t--){
cin>>a>>b;
bool ok=1;
if(a.length()!=b.length()){cout<<"No"<<endl;continue;}
for(int i=0;i<a.length();i++){if(isupper(a[i])){a[i]=tolower(a[i]);}}
for(int i=0;i<b.length();i++){if(isupper(b[i])){b[i]=tolower(b[i]);}}
for(int i=0;i<b.length();i++){
    if(a[i]!=b[i]){
            if(a[i]=='i'&& b[i]=='e'){continue;}
            if(a[i]=='e'&& b[i]=='i'){continue;}
            if(a[i]=='p'&& b[i]=='b'){continue;}
            if(a[i]=='b'&& b[i]=='p'){continue;}
            ok=0;
    }
}
(ok?cout<<"Yes"<<endl:cout<<"No"<<endl);
}
    return 0;
}
