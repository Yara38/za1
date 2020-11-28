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
void outputExcept(int arr[5], int x, int y)
{
	for (int z = 0; z < 5; z++)
	{
		arr[z] >= x && arr[z] <= y ? cout << "" : cout << arr[z] << " ";
	}
}
int main()
{
	setlocale(0, "");
	srand(time(0));
	int arr[5];
	for (int z = 0; z < 5; z++)
	{
		arr[z] = -20 + rand() % (20 + 20);
	}
	outputArray(arr);
	int x, y;
	cout << "Интeрвал от " << endl;
	cin >> x;
	cout << "до " << endl;
	cin >> y;
	cout << "В интервал не входят: " << endl;
	outputExcept(arr, x, y);
}
