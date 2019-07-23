#include<bits/stdc++.h>
using namespace std;
long long a,b;
int main(){
	cin >> a >> b;
	if ((b-a + 1) < 3) {cout << -1 << endl;return 0;}
	if (a%2==0){cout << a << " " << a + 1 << " " << a + 2 << endl;return 0;}
    if ((b-a + 1) > 3){cout << a + 1 << " " << a + 2 << " " << a + 3 << endl;return 0;}
	cout << -1 << endl;
}
/**
1 2 3 4 5 6
b b 0 a a a
**/
