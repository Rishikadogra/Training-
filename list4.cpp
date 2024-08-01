#include<iostream>
#include<list>
#include<iterator> // for std::advance

using namespace std;

int main() {
    // create a list
    list<int> l = {1, 2, 3, 4, 5};

    // create an iterator to point to the first element of the list
    list<int>::iterator itr = l.begin();

    // use advance to move the iterator to point to the 2nd element
    advance(itr, 2);
    // display the 2nd element
    cout << "Second element: " << *itr << endl;

    // use advance to move the iterator to point to the 4th element
    advance(itr, 2);
    // display the 4th element
    cout << "Fourth element: " << *itr << endl;
    

    return 0;
}