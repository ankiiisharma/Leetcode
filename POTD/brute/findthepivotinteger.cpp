#include<bits/stdc++.h>
using namespace std;

int FindThePivot(int n){

    int pivot = 0;

    while(pivot<n){
        int LeftSum = 0;
        int RightSum = 0;

        for(int i=0;i<pivot;i++){
            LeftSum += i;
        }

        for(int j = pivot+1;j<=n;j++){
            RightSum += j;
        }

        if(LeftSum == RightSum){
            return pivot;
            break;
        }
        else{
            pivot++;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;

    int ans = FindThePivot(n);
    cout<<ans;

    return 0;
}