//add the elemnt 
//reverse() :reverse the order of the element
#include<iostream> 
#include<list>
using namespace std;
int main()
{
    list<int>l={1,2,3,4};
    for(int i:l)
    {
        cout<<i<<" "<<endl;
    }
    //adding the elemnt in beginning
    l.push_front(23);
    //adding the element in end;
    l.push_back(34);
    cout<<"New list: ";
    for(int i:l)

    {
        //display new list
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"First element: "<<l.front()<<endl;
    cout<<"Last elment: "<<l.back();
    return 0;
}

