#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);
    cout << binary_search(v.begin(), v.end(), 6) << endl;

    cout << lower_bound(v.begin(), v.end(), 8) - v.begin() << endl;
    cout << upper_bound(v.begin(), v.end(), 9) - v.begin() << endl;

    int a = 3;
    int b = 5;
    cout << max(a, b);
    cout << endl;
    cout << min(a, b);
    cout << endl;
    swap(a, b);
    cout << a;
    cout << endl;
    cout << b;
    cout << endl;
    string s = "abcd";
    reverse(s.begin(), s.end());
    cout << s << endl;
    cout << endl;
    rotate(v.begin(), v.begin() + 1, v.end());
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    sort(v.begin(), v.end());
    for (int i : v)
    {
        cout << i << " ";
    }
}