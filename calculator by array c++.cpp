#include <iostream>
using namespace std;
//ADDITION FUNCTION
int add(int arr[], int size){
	int sum = 0;
	for(int i = 0; i < size; i++){
		sum = sum + arr[i];
	}
	return sum;
}
//MULTIPLY FUNCTION
int multiply(int arr[], int size){
	int multiply = 1;
	for(int i = 0; i < size; i++){
		multiply = multiply * arr[i];
	}
	return multiply;
}

int main(){
	cout<<"\n I HAVE MAKE A CALCULATOR...\n JISME SIRF ADDITION OR MULTIPLY HO SKTA HAI! \n Q KE YE SCIENTIST FATIMA NE BNAYA HAI... \n TO USKI MARZI KI CALCULATIONSS HONGI BSSS \n";
	
	int choice;
	cout<<"\n which calculations do you want? \n for addition press 1 \n for multiply press 2 \n";
	cin>>choice;
	switch(choice){
		
		
		case 1: {
		
			int sizeadd;
	cout<<"\n how many numbers do you want to add: ";
	cin>>sizeadd;
	
	cout<<"\n enter "<<sizeadd<<" numbers: \n";
	
	int arradd[sizeadd];
	for(int i=0; i < sizeadd; i++){
		cin>>arradd[i];
	}
	
	int addresult = add(arradd, sizeadd);
	
	cout<<"\n sum is: "<<addresult;
	break;
}



	case 2:{
	
		int sizemultiply;
	cout<<"\n how many numbers do you want to multiply: ";
	cin>>sizemultiply;
	
	cout<<"\n enter "<<sizemultiply<<" numbers: \n";
	
	int arrmultiply[sizemultiply];
	for(int i=0; i < sizemultiply; i++){
		cin>>arrmultiply[i];
	}
	
	int multiplyresult = multiply(arrmultiply, sizemultiply);
	
	cout<<"\n multiply is: "<<multiplyresult;
	break;
}


	default:
		cout<<"\n YE FATIMA KA CALCULATOR H TO USI KE HISAB SE CALCULATIONS HONGI";
	}
}
