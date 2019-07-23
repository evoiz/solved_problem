#include<bits/stdc++.h>
using namespace std;
int ch(char a) {
	if (a == '^') return 0;
	if (a == '>') return 1;
	if (a == 'v') return 2;
	if (a == '<') return 3;
}
char a, b;
long long n;
int main() {
	cin>>a>>b>>n;
	bool cw=(ch(a)+(n%4))%4==ch(b);
	bool ccw =(ch(a)+((3*n)%4))%4==ch(b);

	puts(cw && ccw ? "undefined" : cw ? "cw" : "ccw");

	return 0;
}
