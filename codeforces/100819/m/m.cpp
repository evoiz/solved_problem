#include<bits/stdc++.h>
using namespace std;
string s;
int tmp,ans;
vector<pair<string,int>>dir;
int ch(int x){
    for(int i = 0; i <dir.size(); i++){
        if(dir[i].first=="ADD") {x+=dir[i].second;continue;}
        if(dir[i].first=="MULTIPLY") {x*=dir[i].second;continue;}
       if(dir[i].first=="SUBTRACT"){if(x-dir[i].second<0){return 1;}x-=dir[i].second;continue;}
       if(x%dir[i].second){return 1;}
       x/=dir[i].second;
       }
    return 0;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;cin>>n;
    while(n--){cin>>s>>tmp;dir.push_back({s,tmp});}
        for(int i=1;i<=100;i++){ans+=ch(i);}

        cout<<ans<<endl;
	return 0;
}
/**


**/
