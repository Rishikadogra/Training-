#include<iostream>
#include<string>
using namespace std;
void stringlen()
{
    string str="SanjamKour";
    int length=str.length();
    cout<<"Length is : "<<length<<endl;
}
void at()
{
    string str="Sanjam";
    char result=str.at(5);
    cout<<" "<<result<<endl;
}
void op()
{
    string str1 = "apple";
string str2 = "banana";
if (str1 == str2) {
    cout << "Strings are equal";
}
else {
    cout << "Strings are not equal";
}
}
int main(){
    stringlen();
    at();
    op();
}