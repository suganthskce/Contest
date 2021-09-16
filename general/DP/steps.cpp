#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

map<int, int> freq;

int steps(int n)
{
    freq[n]++;
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    return steps(n - 1) + steps(n - 2);
}

int steps2(int n)
{
    int arr[n];
    arr[0] = 1;
    arr[1] = 2;
    for (int i = 2; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[n - 1];
}

void printFreq()
{
    for (auto i : freq)
    {
        cout << i.first << " " << i.second << endl;
    }
}

int main()
{
    auto start = high_resolution_clock::now();
    cout << steps(20) << endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;

    auto start2 = high_resolution_clock::now();
    cout << steps2(20) << endl;
    auto stop2 = high_resolution_clock::now();
    auto duration2 = duration_cast<microseconds>(stop2 - start2);
    cout << "Time taken by function: "
         << duration2.count() << " microseconds" << endl;

    // printFreq();
    return 0;
}