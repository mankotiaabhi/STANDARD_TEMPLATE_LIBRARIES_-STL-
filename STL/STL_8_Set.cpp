#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(4);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(4);
    s.insert(8);
    s.insert(8);
    for (auto i : s)
    {
        cout << i << endl;
    }
    set<int>::iterator it = s.begin();
    it++;
    s.erase(s.begin());
    for (int i : s)
    {
        cout << i << "   ";
    }
    cout << endl;
    cout << s.count(5) << " ";
    cout << endl;  
    set<int>::iterator itr = s.find(5);
    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << endl;
    }
    cout << endl;
}