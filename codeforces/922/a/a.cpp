#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double

using namespace std;

int x,y;

int main(){
    cin >> x >> y;

    int tmp=y-1;
    x-=tmp;
    if (x>=0&&x%2==0&&y&&!(y==1&&x>0))
    {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
    return 0;
}