#include<iostream>
using namespace std;
int main()
{
    int arr[4]={4,1,2,1};
    int sum=0,tar=6;
    int i,j;
    for(i=0;i<4;i++)
    for(j=i+1;j<4;j++)
    {
        sum=sum+arr[i];
        if(arr[i]+arr[j]==tar)
        {
            cout<<arr[i]<<" "<<arr[j]<<endl;
        }
    }
    
    
   
    return 0;
}