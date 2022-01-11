#include <bits/stdc++.h>
#define lli long long int
#define ld long double
using namespace std;

struct Dish
{
    ld a, c, l, r;
    bool changed;
    Dish() {}
    Dish(ld w, ld x, ld y, ld z)
    {
        c = w;
        a = x;
        l = y;
        r = z;
        changed = false;
    }
};

bool sortFunc(Dish a, Dish b)
{
    if (a.c == b.c)
    {
        return a.a < b.a;
    }
    return a.c < b.c;
}

void printList(lli n, Dish arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].a << " " << arr[i].c << " " << arr[i].l << " " << arr[i].r << endl;
    }
    cout << endl;
}

int main()
{
    lli t, n, i;
    ld ele1, ele2, ele3, ele4;
    cin >> t;
    while (t--)
    {
        cin >> n;
        Dish list[n];
        for (i = 0; i < n; i++)
        {
            cin >> ele1 >> ele2 >> ele3 >> ele4;
            list[i] = Dish(ele1, ele2, ele3, ele4);
        }
        sort(list, list + n, sortFunc);
        printList(n, list);
        for (i = 0; i < n - 1; i++)
        {
            if (list[i].c > list[i + 1].c)
            {
                cout << " i = " << i << endl;
            }
        }
    }

    return 0;
}