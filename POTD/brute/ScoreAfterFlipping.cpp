#include<bits/stdc++.h>
using namespace std;

int ScoreAfterFlipping(vector<vector<int>>& grid){
    int m = grid.size();
    int n = grid[0].size();

    for(int i=0;i<m;i++){
        if(grid[i][0] == 0){
            //flip
            for(int j=0;j<n;j++){
                grid[i][j] = 1 - grid[i][j];
            }
        }
    }

    for(int j=1;j<n;j++){
        int countZero = 0;
        for(int i=0;i<m;i++){
            if(grid[i][j] == 0){
                countZero += 1;
            }
        }

        int countOne = m - countZero;
        if(countZero > countOne){
            for(int i=0;i<m;i++){
                grid[i][j] = 1 - grid[i][j];
            }
        }
    }


    int score = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int value = grid[i][j]*pow(2,n-j-1);
            score += value;
        }
    }

    return score;

}

int main()
{
    int m,n;
    cin>>m,n;

    vector<int>grid(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }

    int ans = ScoreAfterFlipping(grid);
    cout<<ans;

    return 0;
}