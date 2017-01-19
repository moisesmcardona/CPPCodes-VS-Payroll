#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 7;
	int empID[SIZE] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489 };
	char empName[SIZE][255];
	int hours[SIZE];
	double payRate[SIZE];
	double wages[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter name for employee " << empID[i] << ": ";
		cin.getline(empName[i], 255, '\n');
		cout << "Enter worked hours for employee " << empID[i] << ": ";
		cin >> hours[i];
		while (hours[i] < 0)
		{
			cout << "Worked hours cannot be negative. Please enter a positive number: ";
			cin >> hours[i];
		}
		cout << "Enter the Pay Rate for the employee: $";
		cin >> payRate[i];
		while (payRate[i] < 6.0)
		{
			cout << "Pay Rate cannot be less than $6.00: $";
			cin >> payRate[i];
		}
		wages[i] = hours[i] * payRate[i];
		cin.ignore();
	}
	cout << "--------------" << endl;
	cout << "Employee ID\tEmployee Name\t\t\tGross Wages\n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << empID[i] << "\t\t" << empName[i] << "\t\t$" << wages[i] << endl;
	}
	system("pause");
	return 0;

}