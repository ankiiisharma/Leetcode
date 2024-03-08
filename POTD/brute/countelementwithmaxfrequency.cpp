// You are given an array nums consisting of positive integers.
// Return the total frequencies of elements in nums such that those elements all have the maximum frequency.
// The frequency of an element is the number of occurrences of that element in the array

//example 1: -
// Input: nums = [1,2,2,3,1,4]
// Output: 4
// Explanation: The elements 1 and 2 have a frequency of 2 which is the maximum frequency in the array.
// So the number of elements in the array with maximum frequency is 4.

#include<bits/stdc++.h>
using namespace std;

int CountElementWithMaxFrequency(int arr[],int n){
    int ans = 0;
    int MaxInMap=0;

    map<int,int>myMap;
    for(int i=0;i<n;i++){
        myMap[arr[i]]++;
    }

    for(auto it=myMap.begin();it!=myMap.end();it++){
        if(it->second > MaxInMap){
            MaxInMap = it->second;
        }
    }

    for(auto it=myMap.begin();it!=myMap.end();it++){
        if(it->second == MaxInMap){
            ans += MaxInMap;
        }
    }
 return ans;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = CountElementWithMaxFrequency(arr,n);
    cout<<ans<<endl;
    return 0;
}