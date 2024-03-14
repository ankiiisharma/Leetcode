#include<bits/stdc++.h>
using namespace std;

int BinarySubArrayWithSum(int arr[],int n, int goal){
    
    map<int,int>mpp;

    int sum = 0;
    int count = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        
        if(sum == goal){
            count++;
        }

        if(mpp.find(sum-goal) != mpp.end()){
            count += mpp[sum-goal];
        }

        if(mpp.find(sum) != mpp.end()){
            mpp[sum]++;
        }

        else{
            mpp[sum] = 1;
        }
    }
   return count;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int goal;
    cin>>goal;

    int ans = BinarySubArrayWithSum(arr,n,goal);
    cout<<ans;
    return 0;
}