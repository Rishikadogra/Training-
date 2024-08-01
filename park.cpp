#include<iostream>
using namespace std;
int main()
{
    int choice,ccount=0,bcount=0,rcount=0;
    int ans;
    do{
        cout<<"------------PARKING SYSTEM---------------"<<endl;
    cout<<"Enter 1 to park the car"<<endl;
    cout<<"Enter 2 to park the bike"<<endl;
    cout<<"Enter 3 to park the rickshaw"<<endl;
    cout<<"Enter 4 to exit "<<endl;
    cin>>choice;
    if(choice==1)
    {
    
       ccount++;
    }
    if(choice==2)
    {
        bcount++;
    }
    if(choice==3)
    {
        rcount++;
    }
    if(choice==4)
    {
        cout<<"Exist"<<endl;
        break;
    }
    cout<<"Do you want to park again?"<<endl;
    cout<<"1 for yes"<<endl<<"0 for no"<<endl;
    cin>>ans;

    }
    while(ans);
    cout<<"Number of cars parked: "<<ccount<<endl;
    cout<<"Number of bike parked:"<<bcount<<endl;
    cout<<"Number of rickshaw parked: "<<rcount<<endl; 
    return 0;
}