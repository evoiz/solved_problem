#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
int x;
string s;
bool ch(char c){
return  c=='a'||c=='i'||c=='e'||c=='o'||c=='u'||c=='y';
}
int main(){
cin>>x>>s;
for(int i=0;i<x;i++){
if(!ch(s[i])){cout<<s[i];}
else{
 cout<<s[i];
 while(i<x && ch(s[i]))
 {i++;}
 i--;
}

}
    return 0;
}
