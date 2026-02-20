#include <iostream>
using namespace std;
int main(){
	//mini calculator
	int num1, num2;
	char op;
	int stop;
	do{
		cout<<"\nenter an operator(+-*/): ";
		cin>>op;
		
		cout<<"enter number 1: ";
		cin>>num1;
		
		cout<<"enter number 2: ";
		cin>>num2;
		
		switch(op){
			
			case '+':{
			cout<<"addition: "<<num1 + num2;
				break;
			}
			
			case '-':{
				cout<<"difference: "<<num1 - num2;
				break;
			}
			
			case '*':{
				cout<<"multiply: "<<num1 * num2;
				break;
			}
				case '/':{
					if(num2 == 0){
						cout<<"ERROR! can't divisible by zero";
					}else{
						cout<<"devide: "<<num1 / num2;
					}
					break;
				}
		}
		
		cout<<"\n\npress 1 for continue ";
		cout<<"\npress 2 for exit! ";
		cin>>stop;
	}while(stop != 2);
	
}
