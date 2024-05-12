#include<bits/stdc++.h>
using namespace std;

int maxInMatrix(vector<vector<int>>&grid,int i, int j){
    int n = grid.size();
    int max = INT_MIN;
    for(int x=i;x<i+3 && x<n;x++){
        for(int y=j;y<j+3 && y<n;y++){
            if(grid[x][y]>max){
                max = grid[x][y];
            }
        }
    }
    return max;
}

vector<vector<int>> LargetLocal(vector<vector<int>>&grid){
    int n = grid.size();
    vector<vector<int>>maxLocal(n-2,vector<int>(n-2));

    for(int i=0;i<n-2;i++){
        for(int j=0;j<n-2;j++){
            maxLocal[i][j] = maxInMatrix(grid,i,j);
        }
    }
    return maxLocal;
}

int main()
{

    vector<vector<int>> grid = {{9,9,8,1},{5,6,2,6},{8,2,6,4},{6,2,2,2}};
    vector<vector<int>> ans = LargetLocal(grid);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans.size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}