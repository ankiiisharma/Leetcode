#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>nums = {1,2,3,4,5,6};
    int k = 4;

    Solution obj;
    int ans = MakeMedianEqualToK(nums,k);
    cout<<ans<<endl;
    return 0;
}