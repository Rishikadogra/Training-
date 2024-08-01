#include<iostream>
#include<array>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
   
    array<int,4>a={3,5,2,8};
    int size= a.size();
    cout<<size<<endl<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Element at Index "<<a.at(3)<<endl;
    bool trueFalse=a.empty();
    cout<<"true or false "<<trueFalse<<endl;
    bool empty=a.empty();
    cout<<"is array is empty or not="<<empty<<endl;
    cout<<"first element ="<<a.front()<<endl;
    cout<<"last element="<<a.back()<<endl;
    cout<<a.sort();
 
    
}



