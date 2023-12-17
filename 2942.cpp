#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        int count = 0;

        for (auto &i : words) {
            bool found = false; // Flag to check if character is found in the word
            for (auto &a : i) {
                if (a == x) {
                    found = true;
                    break; // No need to continue checking once the character is found
                }
            }
            if (found) {
                ans.push_back(count);
            }
            count++;
        }

        return ans;
    }
};

int main() {
    Solution solution;

    vector<string> words = {"apple", "banana", "cherry", "date", "kiwi"};
    char targetChar = 'a';

    vector<int> result = solution.findWordsContaining(words, targetChar);

    
    cout << "Indices of words containing the character '" << targetChar << "':" << endl;
    for (const int &index : result) {
        cout << index << endl;
    }

    return 0;
}
