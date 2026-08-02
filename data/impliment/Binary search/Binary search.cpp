#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1; // Element not found
}

int main() {
    int arr[] = {2, 5, 8, 12, 15, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout<< "enter a number:";
    cin >> target;
    int result = binarySearch(arr, 0, n - 1, target);

    if (result == -1)
        cout << "Element not found." << endl;
    else
        cout << "Element found at index " << result << "." << endl;

    return 0;
}
