#include <bits/stdc++.h>
using namespace std;

/**
 * 
 * 
 * sort(startaddress, endaddress)

startaddress: the address of the first 
              element of the array
endaddress: the address of the next 
            contiguous location of the 
            last element of the array.
So actually sort() sorts in the 
range of [startaddress,endaddress)

*/

void show(int a[], int array_size)
{
    for (int i = 0; i < array_size; ++i)
        cout << a[i] << " ";
    cout << "\n";
}

struct Interval
{
    int start, end;
};

// Compares two intervals
// according to staring times.
bool compareInterval(Interval i1, Interval i2)
{
    return (i1.start < i2.start);
}

int main()
{
    // Ascending Order Sorting of Arrays
    int a1[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    int asize = sizeof(a1) / sizeof(a1[0]);
    cout << "The array before sorting is : \n";
    show(a1, asize);
    sort(a1, a1 + asize);
    cout << "\nThe array after Asc sorting is :\n";
    show(a1, asize);

    sort(a1, a1 + asize, greater<int>());
    cout << "\nThe array after Desc sorting is :\n";
    show(a1, asize);

    Interval arr[] = {{6, 8}, {1, 9}, {2, 4}, {4, 7}};
    int n = sizeof(arr) / sizeof(arr[0]);

    // sort the intervals in increasing order of
    // start time
    sort(arr, arr + n, compareInterval);

    cout << "Intervals sorted by start time : \n";
    for (int i = 0; i < n; i++)
        cout << "[" << arr[i].start << "," << arr[i].end
             << "] ";

    return 0;
}