#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int choice;
    stack<int> s;
    int n;
    int answer;
    cout<<"1.Size of  the stack:"<<endl;
     cout<<"2.Insert element into the stack:"<<endl;
     cout<<"3.Delete element from the stack:"<<endl;
     cout<<"4.Top element of the stack:"<<endl;
     cout<<"5.Exit:"<<endl;
do{
    cout<<"Enter your choice.";
    cin>>choice;
    
    switch(choice)
        {
            case 1:


                {
                    cout<<"Size of  the stack:"<<s.size()<<endl;
                    break;
                }
            case 2:
                {
                    cout<<"How many elements do you want to insert?"<<endl;
                    cin>>n;
                    for(int i=0;i<n;i++)
                        {
                            int temp;
                
                    cout<<"Insert element into the stack"<<endl;
                     cin>>temp;
                             s.push(temp);
                        }
                    break;
                }
            case 3:
                {
                    if(s.size()==0)
                    {
                        cout<<"The stack is empty"<<endl;
                    }
                    else
                    {
                    cout<<"Delete element from the stack:"<<endl;
                    s.pop();
                    }
                    break;
                }
            case 4:
                {
                    if(s.size()==0)
                    {
                        cout<<"The stack is empty"<<endl;
                    }
                    else
                    cout<<"Top element of the stack:"<<s.top()<<endl;
                    break;
                }
            case 5:
                {
                    cout<<"Exit"<<endl;
                    break;
                }
            default:
            cout<<"Invalid Input"<<endl;
        }
    cout<<"Do you want to enter another choice?"<<endl;
    cout<<"Enter 1 to continue."<<endl<<"Enter 0 to exit."<<endl;
    cin>>answer;
}
    while(answer);
return 0;
}