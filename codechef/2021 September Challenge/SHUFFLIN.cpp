#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli t, n, a;
    char ch;
    cin >> t;
    while (t--)
    {
        lli eveCount = 0, oddCount = 0;
        cin >> n;
        lli temp = n;
        while (temp--)
        {
            cin >> a;
            if (a % 2 == 0)
            {
                eveCount++;
            }
            else
            {
                oddCount++;
            }
        }
        cout << min(eveCount, (n + 1) / 2) + min(oddCount, (n / 2)) << endl;
    }
    return 0;
}