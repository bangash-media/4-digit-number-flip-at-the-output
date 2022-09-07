#include <iostream>

using namespace std;

//A program that take a 4-digit number from user and flip it at the output

int main() 
{
	int integer,a,b1,b2,c1,c2,d;
	cout<<"\n\n\n\t\t\tPlease Enter a Four Digit number: "; cin>>integer; // having a four digit number from user
	
	cout<<endl<<endl<<endl<<"               ********************************************************\n\n\n";
	
	a=integer%10; //this command will save the unit place value from user input in "a"
	
	cout<<"\t\t\tThe four digit Fliped number value= "<<a;  // this will display the 1000th place digit of the output 
	
	b1=integer/10; // this will reduce the user input to 100th place 
	
	b2=b1%10;  // this will save the value of 10s place of user input in"b2"
	
	cout<<b2;  //this will display the saved value of "b2" as a 100th place digit of the output
	
	c1=integer/100; //this will reduce the user input to 10s place
	
	c2=c1%10;  //this will save the value of 100th place of user input in"c2"
	
	cout<<c2;  //this will display the saved value of "c2" as a 10s place digit of the output
	
	d=integer/1000;  //this will reduce the user input to unit place and will save it in "d"
	
	cout<<d<<"\n";  //this will display the value saved in "d" as a unit place digit
	
	return 0;
}
