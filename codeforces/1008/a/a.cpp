#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
int main() {
    string s;
    cin>>s;
    for(int i = 0; i<s.size();i++){
    	if( s[i]=='a'  || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i] == 'n'){continue;}
    	else{
    		if((s[i+1]=='a' || s[i+1]=='e' || s[i+1]=='i' || s[i+1]=='o' || s[i+1]=='u') && i!=s.size()-1){continue;}
    		else{
    			printf("NO\n");
    			return 0;
    		}
    	}
    }
   printf("YES\n");
	return 0;
}
