#include <iostream>
using namespace std;

int main() {

    int arr[] = {10, 20, 30, 40, 50};

    int* p = arr;

    for (int i = 0; i < 5; i++) {
        cout << "Element: " << *(p + i) << endl;
    }

    return 0;
}
