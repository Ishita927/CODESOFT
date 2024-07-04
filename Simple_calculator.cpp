//SIMPLE CALCULATOR

#include<iostream>
using namespace std;

int main(){
	int Num1, Num2;
	int Sum, Sub, Mul, Div;
	char operation;
	
	cout << "Enter First number :";
	cin >> Num1;
	
	cout << "Enter Second number :";
	cin >> Num2;
	
	cout << "Choose an operation to perform(+,-,*,/) :";
	cin >> operation;
	
	switch(operation)
	{
		case '+':
			Sum=Num1+Num2;
			cout<<"Sum of both the numbers:"<<Sum;
			break;
			
		case '-':
			Sub = Num1 + Num2;
			cout << "Subtraction of both the numbers:" << Sub;
			break;
			
		case '*':
			Mul = Num1 * Num2;
			cout << "Multiplication of both the numbers:" << Mul;
			break;
			
		case '/':
			Div = Num1 / Num2;
			cout << "Division of both the numbers:" << Div;
			break;
			
	}
	
	return 0;
	
}
