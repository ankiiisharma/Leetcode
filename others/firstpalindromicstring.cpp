// Given an array of strings words, return the first palindromic string in the array. If there is no such string, return an empty string "".

// A string is palindromic if it reads the same forward and backward.

 

// Example 1:

// Input: words = ["abc","car","ada","racecar","cool"]
// Output: "ada"
// Explanation: The first string that is palindromic is "ada".
// Note that "racecar" is also palindromic, but it is not the first.

#include<iostream>
#include<vector>
using namespace std;

string firstPalindromicString(int n, vector<string>& questionString){
    // let ourstring: ["abc","car","ada","racecar","cool"]
    // ada.

    string answer = "";

    for(size_t s=0;s<questionString.size();s++){
        bool flag = true;
        int i = 0;
        int j = questionString[s].length() - 1;
        while(i<=j){
            if(questionString[s][i]!=questionString[s][j]){
                flag = false;
                break;
            }
            i++;
            j--;
        }
        if(flag){
            answer = questionString[s];
            break;
        }
    }
    return answer;
}

int main()
{
    int n;
    cin>>n;
    string str;
    vector<string>questionString;
    for(int i=0;i<n;i++){
        cin>>str;
        questionString.push_back(str);
    }


    string ans = firstPalindromicString(n,questionString);

    cout<<endl<<ans<<endl;

    return 0;
}