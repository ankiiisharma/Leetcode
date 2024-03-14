#include <iostream>
#include <vector>

using namespace std;

void in_place_counting_sort(vector<int>& items, int k) {
    vector<int> C(k, 0);

    for (int e : items) {
        C[e]++;
    }

    for (int i = 1; i < k; ++i) {
        C[i] += C[i - 1];
    }

    int i = items.size() - 1;

    while (i >= 0) {
        cout << "items: ";
        for (int item : items) {
            cout << item << " ";
        }
        cout << "\nC: ";
        for (int count : C) {
            cout << count << " ";
        }
        cout << endl;

        int v = items[i];
        int pos = C[v] - 1;

        if (i > pos) {
            i--;
        } else if (v != items[pos]) {
            swap(items[i], items[pos]);
            C[v]--;
        } else {
            C[v]--;
            i--;
        }
    }
}

int main() {
    vector<int> items = {2, 5, 3, 0, 2, 3, 0, 3};
    
    cout << "items: ";
    for (int item : items) {
        cout << item << " ";
    }
    cout << "\nsorting --------------\n";
    
    in_place_counting_sort(items, 6);
    
    cout << "sorting finishing -------------\n";
    
    cout << "items: ";
    for (int item : items) {
        cout << item << " ";
    }

    return 0;
}
