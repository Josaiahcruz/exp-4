#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int choice;
	double sum, diff, prod, quotient,x, y, rem;
	char res;

	do {
		
		cout << "MENU:" << endl;
		cout << "1. Add\n" << "2. Subtract\n" << "3. Multiply\n" << "4. Divide\n" << "5. Modulus\n";
		cout << "Enter your choice: ";
		cin >> choice;
		cout << "Enter two numbers: ";
		cin >> x >> y;


		switch (choice)
		{
		
		case 1:
			sum = x + y;
			cout << "Result: " << sum << endl;
			cout << "----------------------------------------" << endl;
			break;

		case 2:
			diff = x - y;
			cout << "Result: " << diff << endl;
			cout << "----------------------------------------" << endl;
			break;

		case 3:
			prod = x * y;
			cout << "Result: " << prod << endl;
			cout << "----------------------------------------" << endl;
			break;

		case 4:
			quotient = x / y;
			cout << "Result: " << quotient << endl;
			cout << "----------------------------------------" << endl;
			break;

		case 5:
			rem = x % y;
			cout << "Result: " << rem << endl;
			cout << "----------------------------------------" << endl;
			break;

		default:
			cout << "Invalid Input. Try Again.";
			cout << "----------------------------------------" << endl;
			break;
		}

		cout << "Do another calculation? (y/n): ";
		cin >> res;
		cout << "----------------------------------------" << endl;
	} while (res == 'y' || res== 'Y'); 
	cout << "Thank you!";

	system("pause");
	return 0;
}