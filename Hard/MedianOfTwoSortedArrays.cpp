#include <bits/stdc++.h>
using namespace std;

double MedianOfSortedArray(int n, int m, vector<int>& nums1, vector<int>& nums2) {
    vector<int> merged(nums1.size() + nums2.size());
    merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), merged.begin());

    double num = merged.size();
    double answer;

    if (num == 0) {
        return -1; // No elements in merged array, return error code
    }

    if (fmod(num, 2) != 0) {
        answer = merged[num / 2];
    } else {
        int mid = num / 2;
        answer = (merged[mid] + merged[mid - 1]) / 2.0;
    }
    return answer;
}

int main() {
    int n, m;
    cin >> n >> m;
    int a;
    vector<int> nums1;
    for (int i = 0; i < n; i++) {
        cin >> a;
        nums1.push_back(a);
    }
    int b;
    vector<int> nums2;
    for (int i = 0; i < m; i++) {
        cin >> b;
        nums2.push_back(b);
    }

    double ans = MedianOfSortedArray(n, m, nums1, nums2);

    if (ans == -1) {
        cout << "Error: Merged array is empty";
    } else {
        cout << ans;
    }

    return 0;
}
