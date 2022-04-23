#include <iostream>
using namespace std;
long long int recursive_coins(int [], int , int );
int main()
{
	int coins[] = { 1, 2, 5, 10, 50 };
	int size = 5 , number;
	char keepgoing = 'y';
	do
	{
		cout << "\nEnter number : (1-200) ";
		cin >> number;
		cout << "\n---------------\n";
		cout << "count :   " << recursive_coins(coins, size, number);
		cout << "\n---------------\n";
		cout << "\n do you want continue : (y/n) ";
		cin >> keepgoing;
	} while (keepgoing == 'y' || keepgoing == 'Y');
	system("pause");
	return 0;
}
long long int recursive_coins(int coins[], int size, int number)
{
	if ((number < 0) || (size <= 0 && number >= 1))
	{
		return 0;
	}
	if (number == 0)
	{
		return 1;
	}
	return recursive_coins(coins, size-1, number) +	recursive_coins(coins, size, number - coins[size - 1]);
}
