#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l = {3, 4, 1, 6, 3};
    list<int> list2 = {2, 4, 6, 8};
    int n, ele;
    do
    {
        cout << "1.reverse" << endl;
        cout << "2.sort" << endl;
        cout << "3.print unique elements" << endl;
        cout << "4.checks whether empty or not" << endl;
        cout << "5.size" << endl;
        cout << "6.clear all the values" << endl;
        cout << "7.merge lists" << endl;
        cout << "8.exit" << endl;
        cout << "enter your choice" << endl;
        cin >> n;
        switch (n)
        {
        case 1:
            l.reverse();
            cout << "List elements: ";
            for (int num : l)
            {
                cout << num << " ";
            }
            cout << endl;
            break;

        case 2:
            l.sort();
            cout << "List elements: ";
            for (int num : l)
            {
                cout << num << " ";
            }
            cout << endl;
            break;
        case 3:
            l.unique();
            cout << "List elements: ";
            for (int num : l)
            {
                cout << num << " ";
            }
            cout << endl;
            break;
        case 4:
            cout << l.empty() << endl;
            if (l.empty() == 1)
            {
                cout << "enter element";
                cin >> ele;
                l.push_back(ele);
            }
            break;
        case 5:
            cout << "the size of list is" << l.size() << endl;
            break;
        case 6:
            l.clear();
            cout << "elements deleted" << endl;
            break;
        case 7:
            l.merge(list2);
            cout << "List elements: ";
            for (int num : l)
            {
                cout << num << " ";
            }
            cout << endl;
            break;
        }
        
    } while (n>=1&&n<9);
}