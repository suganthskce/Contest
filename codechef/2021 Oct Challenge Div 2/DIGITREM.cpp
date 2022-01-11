#include <bits/stdc++.h>
#define lli long long int
using namespace std;

lli findMex(lli n, lli start, lli end, lli arr[n])
{
    lli i, j;
    for (i = 0; i <= n; i++)
    {
        for (j = start; j <= end; j++)
        {
            if (arr[j] == i)
            {
                break;
            }
        }
        if (j == end + 1)
        {
            return i;
        }
    }
}

int main()
{
    lli t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        lli i, arr[n], j;
        vector<lli> newList;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (i = 0; i < n; i++)
        {
            for (j = i; j < n; j++)
            {
                newList.push_back(findMex(n, i, j, arr));
            }
        }
        sort(newList.begin(), newList.end());
        for (auto i : newList)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}