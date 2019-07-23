#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=25;
char s[N];
int t,n,mn;
string str;
multiset<ll> ms;
vector<pair<int,int>>ans;
int main(){
scanf("%d",&t);
for(int i=0;i<t;i++){
scanf("%s",s);
str=(string)s;
if(str!="removeMin"){
scanf("%d",&n);
}
//////////////////////////////////////////////////////////////////////
if(str=="removeMin"){
       if(ms.size()){ms.erase(ms.begin());ans.push_back({3,0});}
       else{
          ans.push_back({1,0});
           ans.push_back({3,0});
       }
       continue;
}
///////////////////////////////////////////////////////////
if(str=="insert"){ms.insert(n);ans.push_back({1,n});}
/////////////////////////////////////////////////////////
if(str=="getMin"){
if(ms.size()==0){;ans.push_back({1,n});ms.insert(n);ans.push_back({2,n});continue;}
else{
while(*ms.begin()<n && ms.size()){
ans.push_back({3,0});
ms.erase(ms.begin());
}
if(*ms.begin()>n || ms.size()==0){ans.push_back({1,n});ms.insert(n);}
ans.push_back({2,n});
continue;
}
}

}
printf("%d\n",ans.size());
for(auto x:ans){
if(x.F==1){printf("insert %d\n",x.S);}
if(x.F==2){printf("getMin %d\n",x.S);}
if(x.F==3){printf("removeMin\n",x.S);}
}
return 0;
}
/**
1 in
2 get
3 rem

**/
