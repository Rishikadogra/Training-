#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>numbers;
    
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    cout<<"Capacity is : "<<numbers.capacity()<<endl;
  cout << "First element: " << numbers.front() << endl;
  cout << "Last element: " << numbers.back() << endl;  // 
 cout << "Size of the vector: " << numbers.size() << endl;
  if (numbers.empty()) {
    cout << "Vector is empty" << endl;
  } else {
    cout << "Vector is not empty" <<endl;
  }
  cout<<"before pop: "<<endl;
  for(int i:numbers){
 cout<<i<<endl;
  }
  numbers.pop_back();
  cout<<"after pop : "<<endl;
  {
    for(int i:numbers){
        cout<<i<<endl;
    }
  }
  cout<<"After poping the Size of vector : "<<numbers.size();



 


 
 

  return 0;
}
