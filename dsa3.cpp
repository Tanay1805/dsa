#include <iostream>
using namespace std;

void insertAtBeginning(int* arr,int &n,int element){
    for(int i = n-1;i >= 0; i--){
        arr[i+1] = arr[i];
    }
    arr[0] = element;

    for(int i = 0; i < n+1;i++){
        cout << arr[i]<<" ";
    }cout << endl;

}

void insertAtEnd(int *arr, int &n, int element){
    arr[n] = element;
    for(int i = 0; i < n; i++){
        cout << arr[i+1] <<" ";
    }cout <<endl;
}

int main(){
    int n,element;
    cout << "Enter size of array: ";
    cin >> n;
    int array[n];
    
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    cout << "Enter number to insert: ";
    cin >> element;
    insertAtBeginning(array,n,element);
    insertAtEnd(array,n,element);

    return 0;
}