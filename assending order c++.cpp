#include <iostream>
using namespace std;
int main() {
	
    int n;
    cout << "how many values do you want to enter: ";
    cin >> n;
    
    int arr[n];
    cout << "enter numbers: \n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
     //assending order
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Sequence (Sorted Order): ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

