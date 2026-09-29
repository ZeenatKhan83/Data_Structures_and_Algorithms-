#include <iostream>
using namespace std;

int main() {
    int n, m;

    cout << "Enter size of first array: ";
    cin >> n;

    int arr1[n];

    cout << "Enter elements of first sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> m;
  
    int arr2[m];
    cout << "Enter elements of second sorted array: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
  
    int merged[n + m];
    int i = 0, j = 0, k = 0;
  
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            merged[k] = arr1[i];
            i++;
        }
        else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }
  
    while (i < n) {
        merged[k] = arr1[i];
        i++;
        k++;
    }
  
    while (j < m) {
        merged[k] = arr2[j];
        j++;
        k++;
    }
  
    cout << "Merged array: ";
    for (int i = 0; i < n + m; i++) {
        cout << merged[i] << " ";
    }
    return 0;
}
