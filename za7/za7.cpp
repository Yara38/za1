#include <iostream>
#include <ctime>
using namespace std;

void outputArray(int* arr, int& size)
{
	for (int x = 0; x < size; x++)
	{
		cout << arr[x] << " ";
	}
	cout << endl << endl;
}
int main()
{
	setlocale(0, "");
	int size = 5;
	int* arr = new int[size];
	for (int x = 0; x < size; x++)
	{
		arr[x] = -20 + rand() % (20 + 20);
	}
	int minus_count = 1;
	int size_change_arr;
	outputArray(arr, size);
	for (int x = 0; x < size; x++)
	{
		if (arr[x] % 2 == 0 || arr[x] == 0)
		{
			size_change_arr = size - minus_count;
			int* arr_change = new int[size_change_arr];
			for (int k = 0; k < size - minus_count; k++)
			{
				if (arr[k] != arr[x])
				{
					arr_change[k] = *(arr + k);
				}
			}
			minus_count++;
			delete[] arr;
			arr = arr_change;
		}
	}
	outputArray(arr, size_change_arr);
}
