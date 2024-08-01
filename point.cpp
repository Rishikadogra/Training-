#include<iostream>
using namespace std;
int main()
{
    const char *message{"Hello World"};
    cout<<"message :"<<message<<endl;//hello world!
    //*message="B";//Compile error
    cout<<"*message :"<<*message<<endl;//h
    //allow users to modify the string
    char message1[]{"Hello world"};
    message1[0]='B';
    cout<<"message1: "<<message1<<endl;//bello world
    int i=10;
    int *j=&i;
    j=&(i+34);
    cout<<j<<endl;
   
    return 0;
}