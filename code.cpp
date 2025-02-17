#include <iostream>
#include <vector>
#include <algorithm>
#include <thread>
#include <chrono>

using namespace std;

void displayArray(vector<int>& arr) {
    for (int num : arr) {
        for (int i = 0; i < num; i++) cout << "█";
        cout << " (" << num << ")\n";
    }
    cout << "--------------------\n";
    this_thread::sleep_for(chrono::milliseconds(500));
}

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                displayArray(arr);
            }
        }
    }
}

int main() {
    vector<int> arr = {10, 3, 7, 15, 2, 8, 1};
    cout << "Original Array:\n";
    displayArray(arr);
    bubbleSort(arr);
    cout << "Sorted Array:\n";
    displayArray(arr);
    return 0;
}
