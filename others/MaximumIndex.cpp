// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int maxIndexDiff(int a[], int n) 
    { 
       int maxi = INT_MIN;
       int index;
       
       for(int i=0;i<n;i++){
           maxi = max(maxi,a[i]);
        }
        
    for(int i=0;i<n;i++){
        if(maxi==a[i]){
            index = i;
        }
    }
    
    return index;
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        
        //calling maxIndexDiff() function
        cout<<maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
}
