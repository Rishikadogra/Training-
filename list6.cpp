#include<iostream>
#include<list>
#include<iterator>

using namespace std;
int main(){
    list<int>l={1,2};
    list<int>::iterator itr=l.begin();
    if(!l.empty()){
    l.push_back(3);}
    else{
        advance(itr, 0);
        l.insert(itr,6);
    }
    for(int n:l){
        cout<<n<<" ";
    }
    return 0;
}