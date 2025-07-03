#include<iostream>
#include<algorithm> //f0r sort()
#include<climits>

using namespace std;

int main() {
    int n;
    //Input the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    //If array has than less than 3 elements
    if (n < 3) {
        cout << "Array must have at least three elements." << endl;
        return 0;
    }

    int arr[n]; //Declare an array of size n
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; //Input elements of the array
    }
    //Sort the array in descending order
    sort(arr, arr + n, greater<int>());
    //Find the third largest element
    int third_largest = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] < arr[0]) { //Check if the element is less than the largest element
            third_largest = arr[i];
            break; //Break after finding the first element less than the largest
        }
    }
    if (third_largest == INT_MIN) {
        cout << "There is no third largest element." << endl;
    } else {
        cout << "The third largest element is: " << third_largest << endl;
    }
    return 0;
}
