#include<iostream>
using namespace std;

int main()
{
    int arr[] = {0, 0,0, 0, 0, 0, 0, 0, 0, 0};
    
    int count = 0;
    int maxCount = 0;

    for(int i = 0; i < 10; i++)
    {
        if(arr[i] == 1)
        {
            count++;
        
            if(count>maxCount)
                maxCount = count;
         }
        
        else
        {
            count = 0;
        }
    }
    
    
    cout << "The maximum number of consecutive 1s is: " << maxCount << endl;
    
    return 0;
}

