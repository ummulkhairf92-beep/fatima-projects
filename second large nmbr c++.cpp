#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"how many elements you have: ";
	cin>>n;
	int arr[n];
	cout<<"\nenter all elemnets: \n";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int large=arr[0];
	int secondlarge=arr[0];
	for(int i=1; i<n; i++){
		if(arr[i] > large){
			secondlarge = large;
			large = arr[i];
		}else if(arr[i] > secondlarge && arr[i] != large){
			secondlarge = arr[i];
		}
	}
	cout<<"second large: "<<secondlarge<<endl;
	}
