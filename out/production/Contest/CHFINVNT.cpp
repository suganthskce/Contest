#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli t, n, p, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> p >> k;
        cout << (((p % k) * (n / k)) + min(p % k, n % k)) + ((p / k) + 1) << endl;
    }
    return 0;
}