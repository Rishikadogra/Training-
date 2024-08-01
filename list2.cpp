#include<iostream>
#include<list>
using namespace std;
int main()
{
   list<int>l;
   l.push_front(10);
   l.push_front(12);
   l.push_front(12);
   l.push_front(90);
   for(int i:l){
    cout<<i<<" ";
   }}
