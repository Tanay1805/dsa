#include <iostream>
using namespace std;

void addElement(int arr[], int& n, int index, int element) {
    if (index < 0 || index > n) {
        cout << "Invalid index!" << endl;
        return;
    }

    for (int i = n; i > index; --i) {
        arr[i-1] = arr[i];
    }

    arr[index] = element;

    --n;
}

int main() {
    const int maxSize = 100; 
    int arr[maxSize];
    int n; 
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int index;
    cout << "Enter the index where you want to delete the element: ";
    cin >> index;

    int element;
    cout << "Enter the element you want to delete: ";
    cin >> element;

    addElement(arr, n, index, element);

    cout << "Array after deletion:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
