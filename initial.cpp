#include <bits/stdc++.h>
#define lli long long int
using namespace std;
using namespace std::chrono;

int main()
{
    auto start = high_resolution_clock::now();

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;
    return 0;
}