#include <iostream>
#include <vector>
#include <algorithm> // For reverse()

using namespace std;

// Function to reverse a portion of the array
void reverse(vector<int>& arr, int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int n, k;

    // Input size and elements
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter value of k (steps to rotate): ";
    cin >> k;

    // Normalize k in case it's greater than n
    k = k % n;

    // Step 1: Reverse entire array
    reverse(nums, 0, n - 1);

    // Step 2: Reverse first k elements
    reverse(nums, 0, k - 1);

    // Step 3: Reverse the rest
    reverse(nums, k, n - 1);

    // Output the rotated array
    cout << "Rotated array:\n";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
