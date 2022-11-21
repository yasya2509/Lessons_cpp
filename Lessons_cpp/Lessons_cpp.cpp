#include <iostream> 
using namespace std;
void FillArr(int arr[], int size) //запонить масив числами от 1000 до 1010 
{
	for (int i = 0; i < size; ++i)
	{
		arr[i] = 1000 + i;
	}
}
void MultArr(int arr[], int size) //увеличели каждый элемент масива в 10 раз 
{
	for (int i = 0; i < size; ++i)
	{
		arr[i] *= 10;
	}
}

void PrintArr(int arr[], int size) //вывели значения масива в консоль 
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
	const int size = 11;
	int arr[size];
	FillArr(arr, size);
	MultArr(arr, size);
	PrintArr(arr, size);
	cout << " Hello World" << endl;

	return 0;
}
