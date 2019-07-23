#include <bits/stdc++.h>
#include <set>
#include <map>
#include <stdio.h>
#include <cstring>
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
int n,num;
char ch[20];
string read(){scanf("%s",ch);return (string)ch;}
map<string ,int > mp;
string ans;
int main(){
scanf("%d",&n);
for(int i=0;i<n;i++){mp[read()]++;}
for(auto x:mp){if(x.S>num){num=x.S;ans=x.F;}}
printf("%s\n",ans.c_str());
return 0;
}
