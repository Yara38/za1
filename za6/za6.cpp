#include <iostream>
#include <ctime>
using namespace std;

void outputArray(int arr[5])
{
	for (int x = 0; x < 5; x++)
	{
		cout << arr[x] << " ";
	}
	cout << endl << endl;
}
int findMaxFrom(int arr[5])
{
	int max = -99999999;
	int key = 0;
	for (int x = 0; x < 5; x++)
	{
		arr[x] > max ? max = arr[x] : max;
	}
	cout << "Максимальный элемент = " << max;
	return max;
}
int main()
{
	setlocale(0, "");
	srand(time(0));
	int arr[5];
	for (int x = 0; x < 5; x++)
	{
		arr[x] = -20 + rand() % (20 + 20);
	}
	outputArray(arr);
	findMaxFrom(arr);
}
