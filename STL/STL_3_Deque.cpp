#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_front(1);
    d.push_front(0);
    for (int i : d)
    {
        cout << i << "  ";
    }
    cout << endl;
    d.pop_back();
    for (int i : d)
    {
        cout << i << "  ";
    }
    cout << endl;
    cout << d.front() << endl;
    cout << d.back() << endl;
    cout << d.empty() << endl;
    //before erase 
    cout << d.size() << endl;
    d.erase(d.begin(),d.begin()+1); //you have to provide range in erase from d.begin() to d.begin()+1
    // after erase
    cout << d.size() << endl;
    for (int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}