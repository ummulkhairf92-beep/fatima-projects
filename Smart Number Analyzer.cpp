#include <iostream>
using namespace std;

//check even odd function
void checkevenodd(){
	int num;
	cout<<"enter a number: ";
	cin>>num;
	if(num % 2 == 0){
		cout<<num<<" is even number";
	}else{
		cout<<num<<" is odd number";
	}
}

//check prime number function
void checkprime(){
	int num, count=0;
	cout<<"enter a number: ";
	cin>>num;
	for(int i=1; i<=num; i++){
		if(num % i == 0){
			count++;
		}
	}
	if(count == 2){
			cout<<num<<" is prime number";
		}else{
			cout<<num<<" is not prime";
		}
}

//check plindrome number function
void checkplindrome(){
	int num, digit, reverse=0;
	cout<<"enter a number: ";
	cin>>num;
	int org = num;
	while(num > 0){
		digit = num % 10;
		reverse = reverse * 10 + digit;
		num = num / 10;
	}
	if(org == reverse){
		cout<<org<<" is plindrome number";
	}else{
		cout<<org<<" is not plindrome";
	}
}

//check factorial function
void checkfactorial(){
	int num,fact=1;
	cout<<"enter a number: ";
	cin>>num;
		for(int i=1; i<=num; i++){
			fact = fact * i;
		}
	cout<<"factorial of "<<num<<" is: "<<fact;
}

//star main program
//Smart Number Analyzer System
int main(){
	cout<<"SMART NUMBER ANALYZER SYSTEM\n";
	int choice;
	do{
		cout<<"\n=====MENU=====\n";
		cout<<"1. check even or odd number\n";
		cout<<"2. check prime number\n";
		cout<<"3. check plindrome number\n";
		cout<<"4. check factorial\n";
		cout<<"5. exit\n";
		cout<<"enter your choosen number: ";
		cin>>choice;
		switch(choice){
			case 1:{
				checkevenodd();
				break;
			}
			case 2:{
				checkprime();
				break;
			}
			case 3:{
				checkplindrome();
				break;
			}
			case 4:{
				checkfactorial();
				break;
			}
		}
		
	}while(choice != 5);
}
