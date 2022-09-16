#include <iostream>
using namespace std;
void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
void ReversPrint(int arr[], const int n);
int Sum(int arr[], const int n);
float Avg(int arr[], const int n);
void minValue(int arr[], const int n);
void maxValue(int arr[], const int n);
void shiftL(int arr[], const int n);



void main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	ReversPrint(arr, n);
	Sum(arr, n);
	Avg(arr, n);
	minValue( arr, n);
	maxValue(arr, n);
	shiftL(arr, n);
}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	cout << "front array:  ";
	for (int i = 0; i < n; i++)
	{
		cout  << arr[i] << "\t";
	}
	cout << endl;
}
void ReversPrint(int arr[], const int n)
{
	cout << "Revers array: ";
	for (int i = n-1; i >= 0; i--)
	{
		cout  << arr[i] << "\t";
	}
	cout << endl;
}
int Sum(int arr[], const int n)
{
	int Summ = 0;
	for (int i = 0; i < n; i++)
	{
		Summ += arr[i];
	}
	cout << "Summa = " << Summ;
	cout << endl;
		return Summ;

}
float Avg(int arr[], const int n)
{
	float SA = 0;
	SA = Sum(arr, n) / n;
	cout << "avarage = " << SA;
	cout << endl;
	return SA;

}
void minValue(int arr[], const int n)
{
	int MIN = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (MIN > arr[i])
			MIN = arr[i];
	}
	cout << "Min Value =  " << MIN << endl;
}
void maxValue(int arr[], const int n)
{
	int MAX = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (MAX < arr[i])
			MAX = arr[i];
	}
	cout << "Max Value =  " << MAX << endl;
}
void shiftL(int arr[], const int n)
{
	cout << "\tInput shift Left value: ";
		cout << endl;
		int sdvigL;
		cin >> sdvigL;
		for (int i = 0; i < sdvigL; i++)
		{
			int scan = arr[0];
			for (int j = 0; j < n ; j++)
			{
				arr[i] = arr[i + 1];
			}
			arr[n-1] = scan;
			for (int i = 0; i < n; i++)
			{
				cout << arr[i] << " ";
			}
			cout << endl;
				
		}

}