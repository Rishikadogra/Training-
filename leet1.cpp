#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    int func(){
    vector <int> prices={7,1,5,3,6,4};
    int minsofar=prices[0];
    int ans=0;
    for(int i=1;i<prices.size();i++){
        int profit=prices[i]-minsofar;
        if(profit>ans){
            ans=profit;
        }
        minsofar=min(prices[i],minsofar);
    }
    return ans;
}
int main(){
   int ans= func();
   cout<<ans;
}