#include<iostream>
#include<list>
using namespace std;
int main( ) 
{
    list <int> l;

    list <int> n(5,100);
    for (int i:n){
        cout<<i<<" ";
    }
    cout<<endl;

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    for (int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    list <int> last(l);
    cout<<"copied"<<endl;
    for (int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    for (int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size of list  "<<l.size()<<endl;


}