#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    vector <int> a(5,1);
    for (int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    vector <int> last(a); //last is use for copy the array
    for (int i:last){
        cout<<i<<" ";
    }
    cout<<endl;
    v.push_back(1);
    cout<<"Capacity  "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity  "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity  "<<v.capacity()<<endl;
    cout<<"size of the vector =  "<<v.size()<<endl;
    cout<<"index 1 of the vector =  "<<v.at(1)<<endl;
    cout<<"starting element of the vector =  "<<v.front()<<endl;
    cout<<"end element of the vector =  "<<v.back()<<endl;
    //Before pop_back function
    for (int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    //After pop_back function
    for (int i :v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
    v.clear();
    //after clear
    cout<<v.size()<<endl;

    return 0;
}
