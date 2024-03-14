#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// class Solution
// {
//   public:
    //Function to find maximum of each subarray of size k.
    int max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int>ans;
        deque<int>dq;
        int max1=INT_MIN;
        int i=0,j=0;
        while(j<n)
        {
            while(!dq.empty() && dq.back()<arr[j]){
                dq.pop_back();
            }
            dq.push_back(arr[j]);
            if(j-i+1==k)
            {
            ans.push_back(dq.front());
            if(dq.front()==arr[i])
            {
                dq.pop_front();
            }
            i++;
                
            }


            j++;
        }
        return ans;
        

    }
// };



int main()
{
    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // Solution ob;

    cout<<max_of_subarrays(arr,n,k);
    // cout<<ans;
    
    return 0;
}