#include<iostream>
#include<array>
using namespace std;
int main(){
    int basic[3]={1,2,3};
    array <int,5> a= {1,2,3,4,5};
    int size = a.size();
    for (int i=0;size>i;i++){
        cout<<a[i]<<endl;
    }
    cout<<"    Element at 3rd Index   : "<<a.at(3)<<endl;
    cout<<"    Element at ist Index   : "<<a.front()<<endl;
    cout<<"    Element at last Index  : "<<a.back()<<endl;
    cout<<"    ARRAY IS EMPTY?  : "<<a.empty()<<endl;

}