#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli t;
    cin >> t;
    while (t--)
    {
        lli n, m;
        cin >> n >> m;
        lli arr[m];
        for (lli i = 0; i < m; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + m);
        lli sum = 0, i = 0;
        while (sum < n && i < m)
        {
            sum += arr[i++];
        }
        if (sum > n)
        {
            i--;
        }
        cout << i << endl;
    }
    return 0;
}