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
int main()
{
	setlocale(0, "");
	srand(time(0));
	int arr[5];//массив
	for (int x = 0; x < 5; x++)
	{
		arr[x] = -20 + rand() % (20 + 20);
	}

	outputArray(arr);

	int x, y;//переменные
	cout << "Интeрвал от " << endl;
	cin >> x;
	cout << "до " << endl;
	cin >> y;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] >= x && arr[i] <= y)
		{
			arr[i] = 0;
		}
	}
	cout << "Измененный массив:  " << endl;
	outputArray(arr);
}


