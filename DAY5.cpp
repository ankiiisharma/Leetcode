#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(int m, vector<int>& nums1, int n,vector<int>& nums2){
    int i=m-1;
    int j=n-1;
    int k=m+n-1;

    while(i>=0 && j>=0){
        if(nums1[i]>nums2[j]){
            nums1[k]=nums1[i];
            i--;
        }
        else{
            nums1[k]=nums2[j];
            j--;
        }
        k--;
    }

    while(j>=0){
        nums1[k]=nums2[j];
        j--;
        k--;
    }
}

int main()
{
    // vector<int>nums1 = {1,2,3,0,0,0};
    // int m = 3;
    // vector<int>nums2 = {2,5,6};
    // int n = 3;

     int m,a;
     cin>>m;
        vector<int>nums1;
        for(int i=0;i<m;i++){
            cin>>a;
            nums1.push_back(a);
        } 

     int n,b;
     cin>>n;
        vector<int>nums2;
        for(int i=0;i<n;i++){
            cin>>b;
            nums2.push_back(b);
        } 

      merge(m,nums1,n,nums2);

    for(auto num : nums1){
        cout<<num<<" ";
    }
    
    return 0;
}