#include <iostream>
#include <unordered_set>
using namespace std;

void findDuplicates(int arr[], int n) {
    unordered_set<int> seen;
    bool hasDuplicates = false;
    for (int i = 0; i < n; i++) {
        if (seen.find(arr[i]) != seen.end()) {
            cout << arr[i] << " ";
            hasDuplicates = true;
        } else {
            seen.insert(arr[i]);
        }
    }
    if (!hasDuplicates) {
        cout << "No duplicates found";
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    findDuplicates(arr, n);
    return 0;
}