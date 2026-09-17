#include <iostream>
using namespace std;

int main() {

    int arr[] = {10, 20, 30, 40, 50};

    int* p = arr;

    cout << "First element: " << *p << endl;

    p++;
    cout << "After p++: " << *p << endl;

    p++;
    cout << "After another p++: " << *p << endl;

    p--;
    cout << "After p--: " << *p << endl;

    return 0;
}
