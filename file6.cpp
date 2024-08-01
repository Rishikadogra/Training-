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
    while(my_file.get(ch)){
        isalpha((ch))
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            cout<<"A vowel"<<endl;
        }
        else{
            cout<<"A consonent"<<endl;
        }
    }
    return 0;
       
}
