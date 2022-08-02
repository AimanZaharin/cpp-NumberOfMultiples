// NOR AIMAN ZAHARIN BIN NOOR AZWAN
//pli0pa

#include <iostream>

using namespace std;

int main()
{
	int num1, num2, mul1, mul2;
	int i;
	int counter1 = 0, counter2 = 0;

	cout << "Enter two number of multiples for you to use: ";
	cin >> mul1 >> mul2;

	cout << "Enter two integers for you to search the multiples between them: ";
	cin >> num1 >> num2;

	for(i=num1; i<=num2; i++)
	{
		if(i % mul1 == 0)
		counter1++;

		if(i % mul2 == 0)
		counter2++;
	}

	cout << "The number of multiples of " << mul1 << " between " << num1 << " and " << num2 << " is: " << counter1;
	cout << "\nThe number of multiples of " << mul2 << " between " << num1 << " and " << num2 << " is: " << counter2;

	return 0;

}
