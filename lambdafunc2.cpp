#include<iostream>
using namespace std;
int main()
{
    int x=10;
    auto modify=[x]() mutable{
        x=20;
        cout<<"Inside lambda,x= "<<x<<endl;

    };
    modify();
    
        cout<<"Outside Lambda,x "<<x<<endl;
    return 0;
}