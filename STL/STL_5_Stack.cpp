#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("Abhay");
    s.push("Singh");
    s.push("Mankotia");
    cout<<"Top Element -> "<<s.top()<<endl;
    s.pop();
    cout<<"Top Element -> "<<s.top()<<endl;
    cout<<"Size of the stack -> "<<s.size()<<endl;
    cout<<"Empty or not -> "<<s.empty()<<endl;


}