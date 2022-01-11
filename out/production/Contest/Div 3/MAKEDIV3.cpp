#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli t, ele;
    cin >> t;
    while (t--)
    {
        cin >> ele;
        if (ele == 1)
        {
            cout << "3\n";
        }
        else if (ele == 2)
        {
            cout << "21\n";
        }
        else
        {
            for (lli i = 0; i < ele; i++)
            {
                if (i == 0 || i == 1 || i == ele - 1)
                {
                    cout << "1";
                }
                else
                {
                    cout << "0";
                }
            }
            cout << endl;
        }
    }
    return 0;
}