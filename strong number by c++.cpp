#include <iostream>
using namespace std;
int main(){
	//cheak strong number
    int num, digit, fact, sum=0;
    
    cout<<"\nenter a number to cheak if its strong or not: ";
    cin>>num;
    int org = num;
    
    while(num > 0){
    	digit = num % 10;
    	fact = 1;
    	for(int i=1; i<=digit; ++i){
    		fact = fact * i;
		}
		sum = sum + fact;
		num = num / 10;
	}
	//btw, 145 is strong number
	
	if(sum == org){
		cout<<"\nit is strong number!";
	}else{
		cout<<"\nit is not trong number";
	}
	
}
