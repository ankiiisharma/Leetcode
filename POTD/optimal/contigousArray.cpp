#include<bits/stdc++.h>
using namespace std;

  int findMaxLength(int arr[],int n) {
    int ans = 0;
    int prefix = 0;
    unordered_map<int, int> prefixToIndex{{0, -1}};

    for (int i = 0; i < n; ++i) {
      prefix += arr[i] ? 1 : -1;
      if (const auto it = prefixToIndex.find(prefix);
          it != prefixToIndex.cend())
        ans = max(ans, i - it->second);
      else
        prefixToIndex[prefix] = i;
    }

    return ans;
  }


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = findMaxLength(arr,n);
    cout<<ans;
    return 0;
}