#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements in sorted order:\n ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;

    cout << "Enter element to search: ";
    cin >> target;
    
	int left = 0;
    int right = n - 1;

    while (left <= right) {

        int mid = (left + right) / 2;

        if (arr[mid] == target) {
            cout << "Element found at index: " << mid << endl;
            cout << "Position: " << mid + 1 << endl;
            return 0;
        }

        else if (arr[mid] < target) {
            left = mid + 1;
        }

        else {
            right = mid - 1;
        }
    }

    cout << "Element not found";

    return 0;
}
