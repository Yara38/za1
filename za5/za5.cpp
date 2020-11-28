#include <iostream>
#include <ctime>
using namespace std;

void outputDoubleArray(int arr[4][4])
{
	for (int x = 0; x < 4; x++)
	{
		for (int z = 0; z < 4; z++)
		{
			cout << arr[x][z] << " ";
		}
		cout << endl << endl;
	}
}
int findSumElHeadDiag(int arr[4][4])
{
	int diag = -1;//переменные
	int k = 0;
	int arif = 0;
	for (int x = 0; x < 4; x++)
	{
		for (int z = 0; z < 4; z++)
		{
			if (diag + 1 == z)
			{
				if (z != 3)
				{
					diag++;
					cout << arr[x][z - 1] << endl;
					arif += arr[x][z - 1];
					break;
				}
			}
		}
	}
	return arif;
}
int main()
{
	setlocale(0, "");
	srand(time(0));
	int arr[4][4];
	for (int x = 0; x < 4; x++)
	{
		for (int z = 0; z < 4; z++)
		{
			arr[x][z] = -20 + rand() % (20 + 20);
		}
	}
	outputDoubleArray(arr);
	int arif = findSumElHeadDiag(arr);
}
