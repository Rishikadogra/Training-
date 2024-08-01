#include<iostream>
#include<array>
using namespace std;
int main()
{ 
    array<int,5>a={3,3,4,5,5};
int size=a.size();
for(int i=0;i<size;i++){
    cout<<a[i]<<endl;
}
for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        if(a[i]==a[j]){
            cout<<a[i]<<" is two times"<<endl;
        }
    }
}
return 0;

}

