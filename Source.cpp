#include <iostream>
using namespace std;
int main()
{
	int num1,num2,num3,num4;
	cout << " Enter first number: ";
	cin >> num1;
	cout << " Enter second number: ";
	cin >> num2;
	cout << " Enter third number: ";
	cin >> num3;
	cout << " Enter fourth number: ";
	cin >> num4;
	if (num1 < num2 || num1 < num3 || num1 < num4) {
		cout << " The smallest one is " << num1;
	}
	else if (num2 < num1 || num2 < num3 || num2 < num4) {
		cout << " The smallest one is " << num2;
	}
	else if (num3 < num1 || num3 < num2 || num3 < num4) {
		cout << " The smallest one is " << num3;
	}
	else if (num4 < num1 || num4 < num3 || num4 < num2) {
		cout << " The smallest one is " << num4;
	}
	else {
		cout << " I think some of your numbers are equal -_-";
	}


	return 0;
}