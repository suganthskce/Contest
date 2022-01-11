#include <bits/stdc++.h>
#define lli long long int
using namespace std;

bool isValid(lli a, lli b, lli c, lli d, lli e)
{
    if (a <= e && b + c <= d)
    {
        return true;
    }

    if (b <= e && a + c <= d)
    {
        return true;
    }

    if (c <= e && b + a <= d)
    {
        return true;
    }

    return false;
}

int main()
{
    lli t, a, b, c, d, e;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d >> e;
        if (isValid(a, b, c, d, e))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}