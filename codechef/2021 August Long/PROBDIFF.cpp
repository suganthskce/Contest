#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a;
    cin >> t;
    while (t--)
    {
        map<int, int> freq;
        int count = 0, count_2 = 0;
        for (int i = 0; i < 4; i++)
        {
            cin >> a;
            int temp = freq[a];
            freq[a]++;
            if (freq[a] == 1)
            {
                count++;
            }
            if (freq[a] == 2)
            {
                count_2++;
            }
            if (temp == 2)
            {
                count_2--;
            }
        }
        if (freq.size() == 1)
        {
            cout << "0\n";
        }
        else if (freq.size() == 2)
        {
            if (count_2)
            {
                cout << "2\n";
            }
            else
            {
                cout << "1\n";
            }
        }
        else
        {
            cout << "2\n";
        }
    }
    return 0;
}