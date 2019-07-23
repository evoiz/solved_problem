#include<bits/stdc++.h>
#define f first
using namespace std;
map<int , vector<string>> mp;
char m[55];
string s;
int n,t,tmp;
int main(){
scanf("%d",&t);
while(t--){
    mp.clear();
    scanf("%d",&n);
    while(n--){
        scanf("%s %d",m,&tmp);
        s=(string)m;
        mp[tmp].push_back(s);
    }
    int mx=0;
    for(auto x:mp){tmp=x.second.size();mx=max(mx,tmp);}
    ///cout<<mx<<endl;
    for(auto x:mp){
        tmp=x.second.size();
       if(mx==tmp){printf("%d\n",x.first);break;}
    }

}
return 0;
}