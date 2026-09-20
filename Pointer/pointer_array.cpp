#include <iostream>
using namespace std;

int main() {

    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    int* p = arr;

    cout << "Array elements using pointer:\n\n";

    for (int i = 0; i < n; i++) {

        cout << "Index: " << i << endl;
        cout << "Element: " << arr[i] << endl;
        cout << "Address: " << &arr[i] << endl;
        cout << "Value using pointer: " << *(p + i) << endl;

        cout << "------------------------" << endl;
    }

    return 0;
}
