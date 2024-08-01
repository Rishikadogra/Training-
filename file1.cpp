#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //opening a text file for writing.you can use open() to open file.
    //ofstream my_file.open("example.txt")
    ofstream my_file("example.txt");
    //my_file.close();

    //close the file 
    // if(!my_file)
    // {
    //     //print error message
    //     cout<<"Error opening the file"<<endl;
    //     return 1;
    // }
    
    //first way to find the error in file

//------------------------------------------------------------------
    // if(!my_file.is_open())
    // {
    //     cout<<"Error opening the file."<<endl;
    //     return 1;
    // }

// 2nd way

    //-----------------------------------
    if(my_file.fail())
    {
        cout<<"Error opening the file."<<endl;
        return 1;
    }
    else
    {
        cout<<"false";
    }
    // 3rd way
   
}
