#include <bits/stdc++.h>

using namespace std;
int s,v1,v2,t1,t2,x,y;
int main(){
    cin >> s >> v1 >> v2 >> t1 >> t2;
    x+=2*t1+(s*v1);
    y+=2*t2+(s*v2);
    if (x==y){cout << "Friendship" << endl;return 0;}
    if (x<y){cout << "First" << endl;return 0;}
        cout << "Second" << endl;
    return 0;
}
