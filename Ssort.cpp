#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int min,temp;
    for(int i=0;i<5;i++)
    {
     cin>>arr[i];
    }
    for(int i=0;i<=4;i++)
    {
    min=i;
    
      for(int j=i;j<=4;j++)
      {
        if(arr[min]>arr[j])
        {
            min=j;
        }
      }
      temp=arr[i];
      arr[i]=arr[min];
      arr[min]=temp;

    }
    for(int i=0;i<5;i++)
    {
         cout<<arr[i];
    }
    return 0;

}