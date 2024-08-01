#include<iostream>

using namespace std;

int main()

{

  int arr[5];

  int ans;

  for(int h=0;h<5;h++)

  {

    cin>>ans;

  switch(ans)

  {

  case 1:

    {

      cout<<"Enter numbers to insert"<<endl;

      for(int i=0;i<5;i++)

      {

        cin>>arr[i];

      }

      cout<<"Printing numbers"<<endl;

      for(int i=0;i<5;i++)

      {

        cout<<arr[i];

        cout<<" ";

      }

      break;

    }

    case 2:

    {

      int n;

      cout<<"Enter index to delete";

      cin>>n;

      cout<<"Deleted number"<<arr[n]<<endl;

      for(int i=n;i<5;i++)

      {

        if(i+1>5)

        {

          break;

        }

        arr[i]=arr[i+1];

      }

      cout<<"Printing numbers"<<endl;

      for(int i=0;i<4;i++)

      {

        cout<<arr[i];

        cout<<" ";

      }

      break;

    }

    case 3:

    {

      cout<<"Enter updated number and Index"<<endl;

      int num;

      int ind;

      cin>>num>>ind;

      arr[ind]=num;

      cout<<"Printing numbers"<<endl;

      for(int i=0;i<4;i++)

      {

        cout<<arr[i];

        cout<<" ";

      }

      break;

    }

   case 4:

    {

      cout<<"Enter index you want to access"<<endl;

      int ind;

      cin>>ind;

      cout<<arr[ind];

      break;

    }

   case 5:

    exit(0);

  }

  cout<<endl;

  cout<<"Enter next input"<<endl;

  }

}










    


