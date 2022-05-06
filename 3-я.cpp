#include <iostream>
#include <ctime>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	const int строка = 4;
	const int колонка = 4;
	int arr[строка][колонка];

	for (int i = 0; i < строка; i++)
	{
		for (int j = 0; j < колонка; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < строка; i++)
	{
		if (i % 2) {
			int sum = arr[i][0] + arr[i][2];
			cout << sum <<endl;
		}
		else {
			int sum = arr[i][1] + arr[i][3];
			cout << sum <<endl;
		}
	}
	
	for (int i = 0; i < строка; i++)
	{
		for (int j = 0; j < колонка; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cin.get();
	cin.get();
}
