#include <iostream>

using namespace std;

int main ()
{
	int number = 10;
	float celsius[number];
	float total[number];

	cout << "Celsius to Fahrenheit conversion" << endl;
	for(int i=1;i<=number;i++)
	{
		cout << "Enter Celcius (" << i << ") : ";
		cin >> celsius[i];
	}
	
	cout << "\n\nReport Celsius to Fahrenheit conversion" << endl;
	
	for(int i=1;i<=number;i++)
	{
		total[i] = (1.8 * celsius[i] ) + 32;
	}
	
	for(int i=1;i<=number;i++)
	{
		cout << celsius[i] << "C -> " << total[i] << "F" << endl;
	}
	
	cout << "\n\nThank You...\n\n";
	system("pause");
	return 0;
}
