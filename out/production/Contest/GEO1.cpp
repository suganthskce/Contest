#include <bits/stdc++.h>
#define ld long double
using namespace std;

struct Point
{
    ld x, y;
    Point() {}
    Point(ld a, ld b)
    {
        x = a;
        y = b;
    }
};

void printVertex(int n, Point arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout << "(" << arr[i].x << ", " << arr[i].y << ") ";
    }
    cout << endl;
}

Point findCentroid(int n, Point arr[])
{
    ld x = 0;
    ld y = 0;
    for (int i = 0; i < n; i++)
    {
        x += arr[i].x;
        y += arr[i].y;
    }
    Point center = Point(0, 0);
    center.x = x / n;
    center.y = y / n;
    return center;
}

ld findVolume(int n, Point arr[])
{
    double area = 0.0;
    int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        area += (arr[j].x + arr[i].x) * (arr[j].y - arr[i].y);
        j = i;
    }
    return abs(area / 2.0);
}

Point[] newPoints(int n, Point arr[], ld temp, Point centroid)
{
    Point newArr[n];

    return newArr;
}

int main()
{
    int t, n, q, i;
    cin >> t;
    while (t--)
    {
        cin >> n >> q;
        Point arr[n];
        ld ele1, ele2;
        for (i = 0; i < n; i++)
        {
            cin >> ele1 >> ele2;
            arr[i] = Point(ele1, ele2);
        }
        for (i = 0; i < q; i++)
        {
            cin >> ele1 >> ele2;
        }
        Point centroid = findCentroid(n, arr);
        printVertex(n, arr);
        Point newArr[n];
        cout << "Center: " << centroid.x << " " << centroid.y << endl;
        cout << "Volume: " << findVolume(n, arr) << endl;
        newArr = newPoints(n, arr, ele1 * ele2, centroid);
    }
    return 0;
}