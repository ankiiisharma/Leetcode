#include<bits/stdc++.h>
using namespace std;

bool ThreeConsicutiveOdds(vector<int>&arr){
    int count = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]%2 != 0){
            count += 1;
            if(count == 3){
                return true;
            }
        }
        else{
            count = 0;
        }
    }
    return false;
}

int main()
{
    int n;
    cin>>n;

    vector<int>arr = {1,2,34,3,4,5,7,23,12};
    bool ans = ThreeConsicutiveOdds(arr);
    cout<<ans;
    return 0;
}