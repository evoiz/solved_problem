#include <bits/stdc++.h>

using namespace std;
string s;
long long  ans,sum,k;

int main(){
    cin >> k >> s;
    for (int i=0;i<s.length();i++){sum+=s[i]-'0';}
    if (sum>=k){cout << 0 << endl;return 0;}
   int dif=k-sum;
        sort(s.begin(),s.end());
        for (int i=0;i<s.length();i++){
            if (dif<=0)break;
            ans++;
            dif-=9-(s[i]-'0');
        }
        cout << ans << endl;
}
