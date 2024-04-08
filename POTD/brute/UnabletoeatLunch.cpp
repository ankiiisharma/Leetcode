#include<bits/stdc++.h>
using namespace std;

// class Solution{
    int UnableToEatLunch(vector<int>&students, vector<int>&sandwiches){
        // simulation approach
        int n = students.size();
        queue<int>studentQueue;
        stack<int>sandwichStack;

        for(int i=0;i<students.size();i++){
             sandwichStack.push(sandwiches[n-1-i]);
             studentQueue.push(students[i]);
        }

        int sandwicheMissed = 0;
        while(!studentQueue.empty()){
        if(sandwichStack.top() == students.front()){
            sandwichStack.pop();
            studentQueue.pop();
            sandwicheMissed = 0;
        }else{
            studentQueue.push(studentQueue.front());
            studentQueue.pop();
            sandwicheMissed++;
            if(sandwicheMissed == studentQueue.size()) break;
        }
        }
        return studentQueue.size();
    }

int main()
{
    vector<int> students = {1,1,0,0};
    vector<int> sandwiches = {0,1,0,1};

    // Solution obj;
    int ans = UnableToEatLunch(students,sandwiches);
    cout<<ans<<"";

}