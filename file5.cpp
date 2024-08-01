#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream my_file("example.txt");

    if(!my_file){
        cout<<"Error: Unable to open the file."<<endl;
        return 1;
    }

    char ch;
    int sum=0;
    int avg=0,count=0;
    while (my_file.get(ch)) {
        if (isdigit(ch)) {
            int number = 0;
            // Build the number
            while (isdigit(ch)) {
                number = number * 10 + (ch - '0');
                if (!my_file.get(ch)) {
                    break;
                }
            }
            // cout << number << endl;
            count++;
            sum=sum+number;
            avg=sum/count;
        }
    }
    cout<<sum<<endl;
    cout<<avg<<endl;
    return 0;
}