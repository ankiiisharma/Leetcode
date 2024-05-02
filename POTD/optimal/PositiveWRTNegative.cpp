#include<bits/stdc++.h>
using namespace std;

int PositiveWithResprctToNegative(vector<int>& nums){
       int ans = -1;
       unordered_set<int>numSet;
       for(int num : nums){
        if(numSet.count(-num)){
            ans =  max(ans, abs(num));
        }
        numSet.insert(num);
       }
       return ans;
}

int main()
{

    int n,a;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        cin>>a;
        nums.push_back(a);
    }

    int ans = PositiveWithResprctToNegative(nums);
    cout<<ans;

    return 0;
}