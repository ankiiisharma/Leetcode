#include<bits/stdc++.h>
using namespace std;

vector<int> LargestThreeElements(int n, int arr[]){
    int x = sizeof(arr) / sizeof(arr[0]);
    vector<int>answer;
    sort(arr,arr+x);
    int count = 0;
    for(int i=n-1;i>0;i++){
        if(count<=3){
            answer.push_back(arr[i]);
            count += 1;
        }

        return answer;
    }
  return answer;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> ans = LargestThreeElements(n,arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
    return 0;
}


