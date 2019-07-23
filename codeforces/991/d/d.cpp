#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
using namespace std;
ll n ;
int a[101];
int main()
{
int ans = 0 ;
 string s1 , s2 ;
 cin >> s1 >> s2 ;
 int i = 0 ;
 while(i < s1.length()-1)
 {
     if(s1[i] == '0' && s1[i+1] == '0' && s2[i] == '0'){s1[i] = 'X' ; s1[i+1] = 'X' ; s2[i] = 'X';ans++;}
     else if(s1[i] == '0' && s1[i+1] == '0' && s2[i+1] == '0') {ans++;s1[i] = 'X' ; s1[i+1] = 'X' ; s2[i+1] = 'X';}
    else if(s1[i] == '0' && s2[i] == '0' && s2[i+1] == '0') {ans++;s1[i] = 'X' ; s2[i+1] = 'X' ; s2[i] = 'X';}
    else if(s1[i+1] == '0' && s2[i] == '0' && s2[i+1] == '0') {s1[i+1] = 'X' ; s2[i+1] ='X' ; s2[i] = 'X';ans++;}
      i++;
 }

 cout << ans << endl ;
    return 0;
}
/**
**/
