#include<bits/stdc++.h>
using namespace std;

int PositiveWithResprctToNegative(vector<int>& nums){
       sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]*-1 == nums[j] ){
                    return nums[j];
                }
            }
        }
        return -1;

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