#include <bits/stdc++.h>
#define lli long long int
using namespace std;

struct Node
{
    lli a, t, pos;
    Node() {}
    Node(lli x, lli y, lli p)
    {
        a = x;
        t = y;
        pos = p;
    }
};

bool sortFunc(Node a, Node b)
{
    return a.a < b.a;
}

bool sortFuncTime(Node a, Node b)
{
    if (a.t == b.t)
    {
        return a.a < b.a;
    }
    return a.t < b.t;
}

void printList(vector<Node> list)
{
    // cout << "List:\n";
    cout << list.size() << endl;
    for (auto i = list.begin(); i < list.end(); i++)
    {
        cout << (*i).a << " " << (*i).t << " " << (*i).pos << endl;
    }
}

void printAns(vector<Node> list)
{
    lli ans = 0;
    vector<Node> answer;
    for (auto i = list.begin(); i < list.end(); i++)
    {
        answer.push_back(Node((*i).pos, ans, (*i).a + ans));
        ans += (*i).a;
    }
    printList(answer);
}

int main()
{
    lli t, n, i, ele;
    cin >> t;
    while (t--)
    {
        vector<Node> list;
        cin >> n;
        lli arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> ele;
            if (arr[i] <= ele)
            {
                list.push_back(Node(arr[i], ele, i + 1));
            }
        }
        if (list.size() == 0)
        {
            cout << 0 << endl;
            continue;
        }
        sort(list.begin(), list.end(), sortFuncTime);
        // printList(list);

        lli sum = 0;
        vector<Node> answer;
        for (auto i = list.begin(); i < list.end(); i++)
        {
            if ((*i).a + sum <= (*i).t)
            {
                answer.push_back(*i);
                sum += (*i).a;
            }
        }
        printAns(answer);
    }

    return 0;
}