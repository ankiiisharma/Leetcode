#include<bits/stdc++.h>
using namespace std;

 vector<vector<int>> Pascalstriangle (int rowsNums){
    vector<vector<int>>ans;
    for(int i=0;i<rowsNums;i++){
        vector<int>v(i+1,1); // 1
        for(int j=1;j<i;j++){
            v[j] = ans[i-1][j-1] + ans[i-1][j];
        }
        ans.push_back(v);
    }
    return ans;
 }

int main()
{
    int rowsNums;
    cin>>rowsNums;

    vector<vector<int>> ans = Pascalstriangle(rowsNums);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<< " ";
        }
        cout<<endl;
    }

    return 0;
}