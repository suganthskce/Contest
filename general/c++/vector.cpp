#include <bits/stdc++.h>
using namespace std;

/**
 * 
 * Iterators:
 * begin()    -> Returns the Iterator pointing the first element.
 * end()      -> Returns the Iteratir pointing the last element.
 * rbegin()   -> Returns the Reverse Iterator pointing to the last element. 
 * rend()     -> Returns the Reverse Iterator pointing to the First element.
 * cbegin()    -> Returns the Constant Iterator pointing the first element. (Value pointed by the Iterator can not be changed)
 * cend()      -> Returns the Constant Iteratir pointing the last element. (Value pointed by the Iterator can not be changed)
 * crbegin()   -> Returns the Constant Reverse Iterator pointing to the last element. (Value pointed by the Iterator can not be changed)
 * crend()     -> Returns the Constant Reverse Iterator pointing to the First element. (Value pointed by the Iterator can not be changed)
 * 
 * 
 * 
 * Capacity: 
 * size()          -> Returns the number of Elements in the Vector
 * max_size()      -> Returns the Maximum No of Elements that the vector can hold
 * capacity()      -> Returns the size of the storage space currently allocated to the vector expressed as number of elements.
 * resize(n)       -> Resizes the container so that it contains ‘n’ elements.
 * empty()         -> Returns whether the container is empty.
 * shrink_to_fit() -> Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
 * reserve()       -> Requests that the vector capacity be at least enough to contain n elements.
 * 
 * 
 * 
 * Element Access:
 * vectorName[i] -> Returns the data at position 'i'.
 * at(i) -> Returns the data at position 'i';
 * front() -> Returns the data of First Position Element 
 * back()  -> Returns the data at Last Position Element
 * data()  -> Returns the direct pointer of the First Element
 * 
 * 
 * 
 * Modifiers
 * assing(n,k) -> It assigns new value to the verctor. Initalize vector to n size with all k elements.
 * push_back(n) -> It push the element at the end of the vector. Adds n at the last of the Vector.
 * pop_back() -> Pop or Remove a element at the back.
 * insert(iterator, n) -> Insert a element before a specified position. Inserts a element n before the Iterator.
 * insert(iterator, len, n) -> Insert no. of element before a specified position. Inserts 'len' element of value 'n' before the Iterator.
 * insert(iterator, iterator1, iterator2) -> Insert no. of element before a specified position. Inserts all elements between iterator1/iterator2 before the Iterator.
 * erase(iterator) -> Remove a element from Vector at Specified iterator position.
 * erase(iterator1, iterator2) -> Remove an range of elements from Vector from iterator1 to iterator2.
 * clear() -> It is used to remove all the elements in the Vector.
 * swap() -> Swap contents of one vector to another of same type. Size may vary.
 * emplace() -> It extends the container by inserting new element at position
 * emplace_back() -> It is used to insert a new element into the vector container, the new element is added to the end of the vector
 *  
 * 
 * 

*/

void printVector(vector<int> a)
{
    cout << "Printing Vector:\n";
    for (auto i = a.begin(); i != a.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}
int main()
{
    /*
    // Iterator
    vector<int> a;
    for (int i = 1; i <= 5; i++)
        a.push_back(i);
    cout << a[0] << endl;
    for (auto i = a.begin(); i != a.end(); i++)
    {
        cout << *i << " ";
        *i *= 2;
    }
    cout << endl;
    for (auto i = a.cbegin(); i != a.end(); i++)
    {
        cout << *i << " ";
        //Below line throws Error.
        // *i *= 4;
    }
    cout << endl;
    for (auto i = a.end() - 1; i != a.begin() - 1; i--)
    {
        cout << *i << " ";
    }
    cout << endl;
    for (auto i = a.rbegin(); i != a.rend(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    */

    /* 
    // Capacity
    vector<int> b;
    printVector(b);
    cout << "empty: " << b.empty() << endl;
    cout << "size: " << b.size() << endl;
    cout << "capacity: " << b.capacity() << endl;

    b.push_back(1);
    b.push_back(2);
    b.push_back(3);
    printVector(b);
    cout << "size: " << b.size() << endl;
    cout << "capacity: " << b.capacity() << endl;

    b.push_back(4);
    cout << "size: " << b.size() << endl;
    cout << "capacity: " << b.capacity() << endl;

    b.resize(10);
    printVector(b);
    cout << "empty: " << b.empty() << endl;
    cout << "size: " << b.size() << endl;
    cout << "capacity: " << b.capacity() << endl;

    b.push_back(5);
    cout << "size: " << b.size() << endl;
    cout << "capacity: " << b.capacity() << endl;
    printVector(b);
    cout << "empty: " << b.empty() << endl;
    cout << "max_size: " << b.max_size() << endl;

    b.resize(2);
    printVector(b);
    cout << "size: " << b.size() << endl;
    cout << "capacity: " << b.capacity() << endl;

    b.shrink_to_fit();
    printVector(b);
    cout << "size: " << b.size() << endl;
    cout << "capacity: " << b.capacity() << endl;

    b.push_back(5);
    cout << "size: " << b.size() << endl;
    cout << "capacity: " << b.capacity() << endl;

    b.reserve(10);
    cout << "size: " << b.size() << endl;
    cout << "capacity: " << b.capacity() << endl;
    */

    /*
    // Element Access

    vector<int> c;
    for (int i = 1; i <= 5; i++)
        c.push_back(i);
    printVector(c);
    // c.shrink_to_fit();

    // cout << "size: " << c.size() << endl;
    // cout << "capacity: " << c.capacity() << endl;

    // cout << "Ele[3]: " << c[3] << endl;
    // cout << "Ele[4]: " << c[4] << endl;
    // cout << "Ele[5]: " << c[5] << endl;
    // cout << "Ele[6]: " << c[6] << endl;
    // cout << "Ele[7]: " << c[7] << endl;
    // cout << "Ele[8]: " << c[8] << endl;
    // cout << "Ele[9]: " << c[9] << endl;
    // cout << "Ele[10]: " << c[10] << endl;
    // cout << "Ele[11]: " << c[11] << endl;
    // cout << "Ele[12]: " << c[12] << endl;
    // cout << "Ele[13]: " << c[13] << endl;
    // cout << "Ele[14]: " << c[14] << endl;
    // cout << "Ele[15]: " << c[15] << endl;
    // cout << "Ele[16]: " << c[16] << endl;
    // cout << "Ele[17]: " << c[17] << endl;

    // cout << "Ele[-1]: " << c[-1] << endl;
    // cout << "Ele[-2]: " << c[-2] << endl;
    // cout << "Ele[-3]: " << c[-3] << endl;
    // cout << "Ele[-4]: " << c[-4] << endl;
    // cout << "Ele[-5]: " << c[-5] << endl;

    cout << "size: " << c.size() << endl;
    cout << "capacity: " << c.capacity() << endl;

    cout << "at(3): " << c.at(3) << endl;
    cout << "front(): " << c.front() << endl;
    cout << "back(): " << c.back() << endl;
    int *poin = c.data();
    cout << "data(): " << *poin << endl;
    cout << "data() + 1: " << *poin + 1 << endl;

    */

    vector<int> d;

    d.assign(5, 10);
    printVector(d); // 10 10 10 10 10
    d.assign(10, 20);
    printVector(d); // 20 20 20 20 20 20 20 20 20 20
    d.assign(2, 50);
    printVector(d); // 50 50

    d.push_back(3);
    printVector(d); // 50 50 3

    d.pop_back();
    printVector(d); // 50 50

    d.insert(d.begin(), 5);
    printVector(d); // 5 50 50

    d.insert(d.begin() + 2, 10);
    printVector(d); // 5 50 10 50

    d.insert(d.begin() + 1, 5, 100);
    printVector(d); // 5 100 100 100 100 100 50 10 50

    d.insert(d.begin(), d.begin(), d.begin() + 2);
    printVector(d); // 5 100 5 100 100 100 100 100 50 10 50

    d.erase(d.begin());
    printVector(d); // 100 5 100 100 100 100 100 50 10 50

    d.erase(d.begin(), d.begin() + 3);
    printVector(d); // 100 100 100 100 50 10 50

    vector<int> e;
    e.insert(e.begin(), 3);
    printVector(e); // 3
    e.swap(d);
    printVector(e); // 100 100 100 100 50 10 50
    printVector(d); // 3

    e.insert(e.begin(), 10);

    d.clear();
    printVector(d); //

    return 0;
}