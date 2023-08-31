#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("Abhay");
    q.push("Singh");
    q.push("Mankotia");
    cout << q.front() << endl;
    cout << "Before " << q.size() << endl;
    q.pop();
    cout << q.front() << endl;
    cout << "After " << q.size() << endl;
}