#include <bits/stdc++.h>
#define lli long long int
using namespace std;
lli arr[100];

lli findPower(lli val)
{
    if (arr[val] != 0)
    {
        return arr[val];
    }
    arr[val / 2] = findPower(val / 2);
    if (val & 1)
    {
        return arr[val / 2] * arr[val / 2] * 2;
    }
    return arr[val / 2] * arr[val / 2];
}

int main()
{
    lli t, ele;
    cin >> t;
    arr[0] = 1;
    arr[1] = 2;
    while (t--)
    {
        cin >> ele;
        lli pos = -1, temp = ele;
        while (temp != 0)
        {
            temp >>= 1;
            pos++;
        }
        if (findPower(pos + 1) - 1 != ele)
            cout << findPower(pos) << endl;
        else
            cout << ele + 1 << endl;
    }
    return 0;
}