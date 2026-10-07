#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    int left = 0;
    int right = n - 1;

    while (left < right) {

        int sum = arr[left] + arr[right];

        if (sum == target) {
            cout << "Pair found: "
                 << arr[left] << " + " << arr[right] << endl;
            return 0;
        }

        else if (sum < target) {
            left++;
        }

        else {
            right--;
        }
    }

    cout << "No pair found." << endl;

    return 0;
}
