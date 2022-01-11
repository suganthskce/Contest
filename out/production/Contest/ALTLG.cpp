#include <bits/stdc++.h>
#define lli long long int
using namespace std;
map<string, lli> lcmMapper;
map<string, lli> gcdMapper;

void printArr(lli n, lli arr[])
{
    for (lli i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

lli findGCD(lli a, lli b)
{
    if (a == 0)
        return b;
    if (gcdMapper[std::to_string(a) + "-" + std::to_string(b)] != 0)
    {
        return gcdMapper[std::to_string(a) + std::to_string(b)];
    }
    if (gcdMapper[std::to_string(b) + "-" + std::to_string(a)] != 0)
    {
        return gcdMapper[std::to_string(b) + std::to_string(a)];
    }
    gcdMapper[std::to_string(a) + std::to_string(b)] = findGCD(b % a, a);
    return gcdMapper[std::to_string(a) + std::to_string(b)];
}

lli findLCM(lli a, lli b)
{
    if (lcmMapper[std::to_string(a) + "-" + std::to_string(b)] != 0)
    {
        return lcmMapper[std::to_string(a) + std::to_string(b)];
    }
    if (lcmMapper[std::to_string(b) + "-" + std::to_string(a)] != 0)
    {
        return lcmMapper[std::to_string(b) + std::to_string(a)];
    }
    lcmMapper[std::to_string(a) + std::to_string(b)] = (a / findGCD(a, b)) * b;
    return lcmMapper[std::to_string(a) + std::to_string(b)];
}

lli findGCDFromArr(lli l, lli r, lli gcdArr[])
{
    if (l == 0)
    {
        return gcdArr[r];
    }
    return findLCM(gcdArr[r], gcdArr[l - 1]);
}

lli findLCMFromArr(lli l, lli r, lli lcmArr[])
{
    if (l == 0)
    {
        return lcmArr[r];
    }
    return findGCD(lcmArr[r], lcmArr[l - 1]);
}

void operate(lli n, lli arr[], lli lcmArr[], lli gcdArr[])
{
    lli i, l, r, que;
    cin >> que >> l >> r;
    lli total = r - l + 1, ans = arr[r - 1], temp = ((que == 1 && total % 2 != 0) || (que == 2 && total % 2 == 0)) ? 1 : 2;
    for (i = r - 1; i >= l - 1; i--)
    {
        ans = (temp % 2 == 1) ? findGCD(ans, arr[i]) : findLCM(ans, arr[i]);
        temp++;
    }
    cout << ans << endl;
}

void setArr(lli n, lli arr[], lli lcmArr[], lli gcdArr[])
{
    lli i;
    gcdArr[0] = arr[0];
    for (i = 1; i < n; i++)
    {
        gcdArr[i] = findGCD(arr[i], gcdArr[i - 1]);
    }

    lcmArr[0] = arr[0];
    for (i = 1; i < n; i++)
    {
        lcmArr[i] = findLCM(arr[i], lcmArr[i - 1]);
    }
}

int main()
{
    lli t, q, n;
    cin >> t;
    while (t--)
    {
        cin >> n >> q;
        lli arr[n], i, j, l, r, que;
        lli lcmArr[n], gcdArr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            lcmArr[i] = 0;
            gcdArr[i] = 0;
        }
        while (q--)
        {
            operate(n, arr, lcmArr, gcdArr);
        }
    }

    return 0;
}