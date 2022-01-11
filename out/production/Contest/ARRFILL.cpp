#include <bits/stdc++.h>
#define lli long long int
using namespace std;

struct Node
{
    lli x, y;
    Node()
    {
    }
    Node(lli a, lli b)
    {
        x = a;
        y = b;
    }
};

bool sortFunc(Node a, Node b)
{
    return a.x > b.x;
}

lli findGCD(lli a, lli b)
{
    if (a == 0)
        return b;
    return findGCD(b % a, a);
}

lli findLCM(lli a, lli b)
{
    return (a / findGCD(a, b)) * b;
}

int main()
{
    lli t, n, m, x, y, i, j;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        Node arr[m];
        for (i = 0; i < m; i++)
        {
            cin >> x >> y;
            arr[i] = Node(x, y);
        }
        sort(arr, arr + m, sortFunc);
        lli sum = 0, previous = n, temp = 1;
        map<lli, lli> freq;
        for (i = 0; i < m && previous > 0; i++)
        {
            temp = findLCM(arr[i].y, temp);
            if (freq[temp])
            {
                continue;
            }
            freq[temp]++;
            lli count = n / temp;
            previous -= count;
            if (previous < 0)
            {
                previous = 0;
            }
            sum += previous * arr[i].x;
            previous = count;
        }
        cout << sum << endl;
    }
    return 0;
}