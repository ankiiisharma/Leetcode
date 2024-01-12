#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int KthLargestElement(int nums[],int k,int n){
    priority_queue<int,vector<int>,greater<int>> minpq;

    for(int i=0;i<n;i++){
        if(minpq.size()<k){
            minpq.push(nums[i]);
        } else{
            if(minpq.top()<nums[i]){
              minpq.pop();
              minpq.push(nums[i]);
           }
        }
    }
    return minpq.top();
}

int main()
{
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    int k;
    cin>>k;

    int ans = KthLargestElement(nums,k,n);
    cout<<ans<<endl;

    return 0;
}