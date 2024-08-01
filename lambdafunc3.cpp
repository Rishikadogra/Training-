#include<iostream>
using namespace std;
int main()
{
    auto divide=[](int a,int b)->double {
        if(b==0){
            return 0; //handle divison zero
        }
        return static_cast<double>(a)/b;
    
    };
    cout<<"Division result:"<<divide(10,2)<<endl;//output: divison reult:5
    cout<<"divison by zero reult: "<<divide(10,0)<<endl;//output:divison by zero
    return 0;
}