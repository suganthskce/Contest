#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli t, n, a, b;
    char ch;
    cin >> t;
    while (t--)
    {
        lli sum = 0;
        cin >> n >> a >> b;
        while (n--)
        {
            cin >> ch;
            if (ch == '0')
            {
                sum += a;
            }
            else if (ch == '1')
            {
                sum += b;
            }
        }
        cout << sum << endl;
    }
    return 0;
}