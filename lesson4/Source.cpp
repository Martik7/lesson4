#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int binarySearch(int a[], int size, int key)
{
	int low = 0;
	int high = size - 1;
	int middle;
	while (low <= high)
	{
		middle = (low + high) / 2;
		if (a[middle] < key)
			low = middle + 1;
		else if (a[middle] > key)
			high = middle - 1;
		else
			return middle;
	}
	return -1;

}

void change_var(int &a)
{
	a = 100;
}

//void FillArray(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		a[i] = (i + 1) * 10;
//	}
//}

void FillArray(int a[], int b[],int c[], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		a[i] = 1 + rand() % 100;
	}
	for (size_t i = 0; i < n; i++)
	{
		b[i] = 1 + rand() % 100;
	}
	for (size_t i = 0; i < n; i++)
	{
		c[i] = a[i] + b[i];
	}
}

void PrintArray(int a[], int b[],int c[], int n)
{
	for (size_t i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	for (size_t i = 0; i < n; i++)
		cout << b[i] << " ";
	cout << endl;
	for (size_t i = 0; i < n; i++)
		cout << c[i] << " ";
	cout << endl;
}

double okrugleniy(double var, int n)
{
	var = double(int(var * pow(10, n)+ 0.5)) / pow(10,n);
	return var;
}

int peregruzka(int a[], int n)
{
	int k = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (a[i] == 0)
		{
			k++;
		}
		return k;
	}
}

int peregruzka(double a[], int n)
{
	int k = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (a[i] == 0)
		{
			k++;
		}
		return k;
	}
}

void change(int &x)
{
	x = 5;
}

int minArray(int a[], int size, int &minIndex)
{
	int min = a[0];
	for (size_t i = 0; i < size; i++)
	{
		if (a[i] <= min)
		{
			min = a[i];
			minIndex = i;
		}
	}
	return min;
}

int draw_square(int width) {
	if (width <= 0)
		return 0;
	for (int i = 0; i < width; ++i)
	{
		for (int j = 0; j < width; ++j)
			printf("%c", i == 0 || i == width - 1 || j == 0 || j == width - 1 ? '*' : ' ');
		puts("");
	}
	return 1;
}

char minArray(char a[], int size, int &minIndex)
{
	char min = a[0];
	for (size_t i = 0; i < size; i++)
	{
		//мин
	}
}


int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	//классная работа
	/*int arr[9] = { 1,3,4,5,6,9,11,12,14 };
	cout << binarySearch(arr, 9, 12);*/

	/*int x;
	cin >> x;
	change_var(x);
	cout << x << endl;*/

	/*int arr[5] = { 2,3,4,1,10 };
	PrintArray(arr, 5);
	FillArray(arr, 5);
	PrintArray(arr, 5);*/

	//1 задача
	/*int arr[5] = { 1,2,3,4,5 };
	int arr1[5] = { 2,4,6,8,10 };
	int arr2[10];
	FillArray(arr, arr1,arr2, 5);
	PrintArray(arr, arr1,arr2, 5);*/

	//2 задача
	/*double x;
	int n;
	cin >> x >> n;
	cout << fixed <<setprecision << okrugleniy(x, n) << endl;*/

	//3 задача
	/*int a[5] = { 2,9,8,2,4 };
	cout << peregruzka(a, 5) << endl;
	double b[7] = { 0,2.5,3.6,0,5 };
	cout << peregruzka(b, 7) << endl;*/

	/*int a;
	change(a);
	cout << a << endl;*/

	/*int a[5] = { 10,2,3,5,6 };
	int min;
	cout << minArray(a, 5, min);*/

	/*int a;
	while (printf("Enter width: ") && scanf_s("%d", &a) && draw_square(a));*/



	system("pause");
	return 0;
}