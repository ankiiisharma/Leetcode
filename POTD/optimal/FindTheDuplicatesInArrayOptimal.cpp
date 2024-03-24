// FindTheDuplicatesInArrayOptimal

#include<bits/stdc++.h>
using namespace std;

int DuplicatesInAnArrayOptimal(int n, vector<int>&nums){
 // nums : 1 2 2    a
 // output : 2      2a 
    int slow = nums[0]; // 1
    int fast = nums[0]; // 1

    do{
        slow = nums[slow]; // 2
        fast = nums[nums[fast]]; // 2
    } while(slow != fast);

    fast = nums[0]; // 1
    while(slow != fast){
        slow = nums[slow]; // 2
        fast = nums[fast]; // 2
    }
  return fast;
}

int main()
{
    int n;
    cin>>n;
    int a;
    vector<int>nums;
    for(int i=0;i<n;i++){
        cin>>a;
        nums.push_back(a);
    }

    int ans = DuplicatesInAnArrayOptimal(n,nums);
    cout<<ans;
    return 0;
}