#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;

    cout << "Enter element to search: ";
    cin >> target;

    bool found = false;

    for (int i = 0; i < n; i++) {

        if (arr[i] == target) {

            cout << "Element found!" << endl;
            cout << "Index: " << i << endl;
            cout << "Position: " << i + 1 << endl;

            found = true;
            break;
        }
    }

    if (found == false) {
        cout << "Element not found." << endl;
    }

    return 0;
}
