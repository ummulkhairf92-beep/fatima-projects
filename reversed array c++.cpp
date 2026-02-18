
#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"\n how many number you want to enter: ";
	cin>>n;
	int num[n];
	cout<<"\n enter "<<n<<" numbers for reverse: \n";
	for(int i=0; i<n; i++){
		cin>>num[i];	
	}
	
	cout<<"\n real number: ";
	for(int i=0; i<n; i++){
		cout<<num[i]<<" ";
	}
	for(int i=0; i<n/2; i++){
		int temp = num[i];
		num[i] = num[n - 1 - i];
		num[n - 1 - i] = temp;
	}
	cout <<"\n reversed number: ";
	for(int i = 0; i < n; i++){
		cout <<num[i]<<" ";
	}
}
