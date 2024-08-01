#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
   list<int>numbers{1,2,3};
   cout<<"Initial list :";
   for(int i:numbers)
   {
    cout<<i<<" ,";
   }
   list<int>::iterator itr=numbers.begin();
   ++itr;
   ++itr;
   numbers.insert(itr,0);
   cout<<"Final list: ";
   for(int number:numbers)
   {
    cout<<number<<" ,";
   }
   return 0;
    
}
