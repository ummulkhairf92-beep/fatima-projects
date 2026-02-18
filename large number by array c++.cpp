#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "\n How many numbers do you want to enter: ";
    cin >> size;

    int arr[size];   

    cout << "\n Enter " << size << " numbers:\n";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];  

    for(int i = 1; i < size; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "\n Largest element in array = " << largest;

    return 0;
}

