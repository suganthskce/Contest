#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli t, n, x, ele;
    cin >> t;
    while (t--)
    {
        map<lli, lli> mapper1, mapper2;
        cin >> n >> x;
        lli values[n];
        for (lli i = 0; i < n; i++)
        {
            cin >> values[i];
            mapper1[values[i]]++;
            // values[ele]++;
            mapper2[values[i] ^ x]++;
        }
        lli highest = 0, value = -1;
        for (lli i = 0; i < n; i++)
        {
            if (highest < mapper1[values[i]] + mapper2[values[i]])
            {
                highest = mapper1[values[i]] + mapper2[values[i]];
                value = values[i];
            }
        }
        cout << highest << " " << mapper2[value] << endl;
    }
    return 0;
}