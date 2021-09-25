#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli t, ele;
    cin >> t;
    while (t--)
    {
        lli count = 0;
        for (lli i = 0; i < 7; i++)
        {
            cin >> ele;
            count += ele;
        }
        if (count > 3)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}