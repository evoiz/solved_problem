#include<bits/stdc++.h>
using namespace std;
const int N = 109;
int main()
{
	ios::sync_with_stdio(0);
	long long l = 1, h = 1e6;
	while (l <= h)
	{
		string  ch;
		long long mid = (l + h+1) / 2;
		cout << mid<<endl;
		cout.flush();
		cin >> ch;
		if (ch == ">=") {

			l = mid;
		}
		else if (ch == "<")
		{
			h = mid - 1;
		}
		if (l == h)
		{
			cout << "! " << l << endl; return 0;
		}

	}

	return 0;


}
