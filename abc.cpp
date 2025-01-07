#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int linearSearch(const vector<int>& arr, int target) {
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int binarySearch(const vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the element to search: ";
    cin >> target;

    int choice;
    cout << "Select search method:\n1. Linear Search\n2. Binary Search\nEnter your choice: ";
    cin >> choice;

    int result = -1;

    if (choice == 1) {
        result = linearSearch(arr, target);
    }
    else if (choice == 2) {
        sort(arr.begin(), arr.end());

        result = binarySearch(arr, target);
    }
    else {
        cout << "Invalid choice!" << endl;
        return 1;
    }

    if (result != -1) {
        cout << "Element found at index " << result << "." << endl;
    }
    else {
        cout << "Element not found." << endl;
    }

    return 0;
}
