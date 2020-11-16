#include <iostream>
using namespace std;

int main ()
{
	int number = 5;
	int array_1 [number];
	int array_2 [number];
	int array_3 [number];
	char array_4 [number];
	
	//input_1
	cout << "Input Data To Array : 1 " << endl;
	for (int i=1; i<=5; i++)
	{
	cout << "Enter Number To Array (" << i << ") : ";
	cin >> array_1[i];
	}
	//input 2
	cout <<"\n\nInput Data To Array : 2 "<< endl;
	for (int i=1; i<=5; i++)
	{
	cout << "Enter Number To Array (" << i << ") : ";
	cin >> array_2[i];
	}
	
	cout << "\nReport" << endl;
	for (int i=1; i<=number; i++)
	{
		array_3[i] = array_1[i] + array_2[i]; //total
		cout << array_1[i] << "+" << array_2[i] << " = " << array_3[i];
	if ((array_3[i]%2)==0)
	{
		cout << "(E)";
	}
	else
	{
		cout << "(O)";
	}
	cout << endl;
	}

	cout << "\n\n";
	system("pause");
	return 0;
}
