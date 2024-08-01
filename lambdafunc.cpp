//a function that has no name
//to reduce the code
//syntax:
//[capture](parameters)->return_type{
//function body
//};

#include<iostream>
using namespace std;
int main()
{
    int x=20;
    int y=10;
    auto add=[=](int a){
        return x+y+a;
    };
    cout<<"Sum "<<add(5)<<endl;
    auto addbyref=[&x,&y](int a){
        x=30;//modifying x
        return x+y+a;
    
    };
    cout<<"Sum by reference :"<<addbyref(5)<<endl;
    cout<<"x after modification: "<<x<<endl;
    return 0;
}