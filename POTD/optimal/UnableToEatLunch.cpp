#include<bits/stdc++.h>
using namespace std;

// class Solution{
    int UnableToEatLunch(vector<int>&students, vector<int>&sandwiches){
        int zeroCount = 0;
        int oneCount = 0;

        for(int student : students){
            if(student == 0) zeroCount++;
            else oneCount++;
        }

        for(int sandwiche : sandwiches){
            if(sandwiche == 0 && zeroCount == 0) return oneCount;
            if(sandwiche == 1 && oneCount == 0) return zeroCount;

            if(sandwiche == 0) zeroCount--;
            else oneCount--;
        }
        return 0;
    }

int main()
{
    vector<int> students = {1,1,0,0};
    vector<int> sandwiches = {0,1,0,1};

    // Solution obj;
    int ans = UnableToEatLunch(students,sandwiches);
    cout<<ans<<"";

}