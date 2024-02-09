#include <iostream>
using namespace std;

void insertAtGivenLocation() {
    int arr[100], n;
    fill_n(arr, 100, -1);
    cout<<"Enter number of values to add initially: ";
    cin>>n;
    int val=0,i;
    for(i=0;i<n;i++) {
        cout<<"Enter initial value"<<i<<": ";
        cin>>val;
        arr[i]=val;
    }
    int count=0;
    i=0;
    while(arr[i]!=-1) {
        count++;
        i++;
    }
    int pos;
    cout<<"Enter position where you want to enter new value: ";
    cin>>pos;
    if(arr[pos]==-1) {
        cout<<"Enter value to add at this position: ";
        cin>>arr[pos];
    }
    else{
        for(i=count-1;i>=pos;i--) {
            arr[i+1]=arr[i];
        }
        count++;//as one new value added is known.
        cout<<"Enter value to add at this position: ";
        cin>>arr[pos];
    }

    for(int i=0;i<100;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}