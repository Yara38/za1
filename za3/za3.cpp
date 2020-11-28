#include <iostream>
#include <ctime>
using namespace std;

void outputArray(int arr[10])
{
	for (int x = 0; x < 10; x++)
	{
		cout << arr[x] << " ";
	}
	cout << endl << endl;
}
void findMin(int arr[10])
{
	int min = 99999999;//переменные
	int key = 0;
	for (int x = 0; x < 10; x++)
	{
		if (arr[x] < min)
		{
			min = arr[x];
			key = x;
		}
	}
	cout << "Номер минимального элемента = " << key;
}
int main()
{
	setlocale(0, "");
	srand(time(0));
	int arr[10];//массив
	for (int x = 0; x < 10; x++)
	{
		arr[x] = -20 + rand() % (20 + 20);
	}
	outputArray(arr);
	findMin(arr);
}
