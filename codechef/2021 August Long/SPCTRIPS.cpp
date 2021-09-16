#include <bits/stdc++.h>
#define lli long long int
using namespace std;

lli calc(lli a, lli b, lli n)
{
    return n / b + (a <= n % b ? 1 : 0);
}

int main()
{
    lli t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        lli a, b, c, sum = 0;
        for (c = 1; c <= n; c++)
        {
            for (b = c * 2; b <= n; b += c)
            {
                sum += calc(c, b, n);
            }
        }
        cout << sum << endl;
    }

    return 0;
}