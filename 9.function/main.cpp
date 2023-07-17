
#include <iostream>
using namespace std;
int main()

{
	int num1, num2, sum = 0; //Sum starts at 0 and contains the sum of all even numbers

	cout << "Enter first integer: ";
	cin >> num1;
	cout << "Enter second integer: ";
	cin >> num2;

	while (num1 <= num2)	{
		if(num1== 0)	cout << num1 << " is odd." ;
		else 		sum += num1; //If even, add this number to the sum

		num1++;
	}
	cout << "The sum of all even numbers between " << num1 << " and " << num2 << " is " << sum << "." << endl;
	cin.get();
}
