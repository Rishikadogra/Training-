#include<iostream>
using namespace std;
int main()
{
    int n,arr[n];
    cin>>n;
 
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int temp;
  for(int i=0;i<5;i++)
     for(int j=0;j<5;j++)
     {
        if(arr[j]>arr[j+1])
        {
             temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
        }
     }
  for(int k=0;k<5;k++)
  {
    cout<<arr[k]<<endl;
  }
  int ele;
  cin>>ele;
  int l=0; 
  int r=n-1;
  int mid=(l+r)/2;
   int arr[mid];
  while(l>=r){
 
  if(ele==arr[mid])
  {
    cout<<arr[mid]<<endl;
  }
  else if(ele>arr[m])
  {
    l=mid+1;
  }
  else if(ele<arr[m])
  {
    r=mid-1;
  }
  

  }


}
  


  
