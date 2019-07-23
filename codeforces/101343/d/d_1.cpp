#include <bits/stdc++.h>

using namespace std;
//D. Husam's Bug

int n;
string s;
int main()
{
    cin >> n;
    while(n--)
    {
        int sym=0,lett=0,digit=0;
        cin >> s;
        for (int i=0;i<s.length();i++)
        {
            if (s[i]>='0'&&s[i]<='9')
            {
                digit++;
            }
            else if ((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
            {
                lett++;
            }
            else
                sym++;
        }
        if (lett>=4&&digit>=4&&sym>=2)
        {
            cout << "The last character can be any type." << endl;
        }
        else if (lett<4)
        {
            cout << "The last character must be a letter." << endl;
        }
        else if (digit<4)
        {
            cout << "The last character must be a digit." << endl;
        }
        else if (sym<2)
        {
            cout << "The last character must be a symbol."<< endl;
        }
    }
    return 0;
}
