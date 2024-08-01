#include<iostream>
using namespace std;
int main()
{
    int n,m;
    int i,j;
    cout<<"Enter rows"<<endl<<"And colums"<<endl;
    cin>>n>>m;
    int arr[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
            
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
          cout<<arr[i][j]<<" ";
          
        }
        cout<<endl;
    }


}