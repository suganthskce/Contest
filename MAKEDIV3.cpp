#include <bits/stdc++.h>
#define lli long long int
using namespace std;
lli maxValue = 0;

void findMax(lli n, lli a[], lli b[], lli pos, lli remaining, lli value)
{
    if (remaining < 0)
    {
        return;
    }
    if (pos == 3)
    {
        if (value > maxValue)
        {
            maxValue = value;
        }
    }
    findMax(n, a, b, pos + 1, remaining, value);
    findMax(n, a, b, pos + 1, remaining - a[pos], value + b[pos]);
}

int main()
{
    lli t, a[3], b[3];
    cin >> t;
    while (t--)
    {
        maxValue = 0;
        for (lli i = 0; i < 3; i++)
        {
            cin >> a[i];
            a[i] *= 20;
        }
        for (lli i = 0; i < 3; i++)
        {
            cin >> a[i];
            b[i] *= 20;
        }
        findMax(3, a, b, 0, 240, 0);
        cout << maxValue << endl;
    }
    return 0;
}