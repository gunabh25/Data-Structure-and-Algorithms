#include <iostream>
using namespace std;

int main() {
    int n;
    //Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    //Input the elements of the array
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    //Reverse the array using two pointers
    int start = 0, end = n - 1;
    while (start < end) {
        // Swap the elements at start and end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        // Move the pointers towards the center
        start++;
        end--;
    }
    //Output the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}