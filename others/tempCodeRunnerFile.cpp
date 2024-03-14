#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int RotatedArray(int arr[],int n){
    int temp = arr[0];
    for(int i=1;i<n-1;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    return 0;
    
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = RotatedArray(arr,n);
    return 0;
}