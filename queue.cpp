#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main(){
    queue<string>q;
    q.push("Alpha");
    q.push("sabha");
    q.push("mabha");
    
    
    

  cout<<q.size()<<endl;
  int m=q.size();
    for(int i=0;i<m;i++)
    {
         
         cout<<q.front()<<endl;
         q.pop();
        
    }

    return 0;
}