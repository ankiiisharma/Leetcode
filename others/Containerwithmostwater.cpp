#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int customMax(int x, int y) {
    return (x > y) ? x : y;
}

int customMin(int x, int y) {
    return (x < y) ? x : y;
}

int ContainerWithMostWater(vector<int>& arr) {
    int n = arr.size();
    int i = 0;
    int j = n - 1;
    int maxArea = 0;
    int count = 0;
    int temp;

    while (i < j) {
        if (arr[i] < arr[j]) {
            temp = arr[i] * (j - i);
            maxArea = customMax(maxArea, temp);
            i++;
            count++;
        } else if (arr[i] > arr[j]) {
            int minHeight = customMin(arr[i], arr[j]); // minimum height
            temp = minHeight * (n - count);
            maxArea = customMax(maxArea, temp);
            j--;
            count++;
        }
    }

    return maxArea;
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }

    int ans = ContainerWithMostWater(arr);
    cout << "Maximum water container area: " << ans << endl;

    return 0;
}
