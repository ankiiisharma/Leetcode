#include <bits/stdc++.h>

using namespace std;

vector<string> findRelativeRanks(vector<int>& score) {
    map<int, int, greater<int>> indexMap;

    for (int i = 0; i < score.size(); ++i) {
        indexMap[score[i]] = i;
    }

    vector<string> answer(score.size());

    int rank = 1;
    for (auto it = indexMap.begin(); it != indexMap.end(); ++it) {
        if (rank == 1) {
            answer[it->second] = "Gold Medal";
        } else if (rank == 2) {
            answer[it->second] = "Silver Medal";
        } else if (rank == 3) {
            answer[it->second] = "Bronze Medal";
        } else {
            answer[it->second] = to_string(rank);
        }
        ++rank;
    }

    return answer;
}

int main() {
    vector<int> score = {10, 3, 8, 4, 9};
    vector<string> result = findRelativeRanks(score);

    cout << "Output: [";
    for (int i = 0; i < result.size(); ++i) {
        cout << "\"" << result[i] << "\"";
        if (i != result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}