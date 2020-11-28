#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(0, "");
    int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };//массив
    const size_t N = sizeof(arr) / sizeof(*arr);

    for (size_t i = 0; i < N; i++) cout << arr[i] << ' ';
    cout << endl;

    int x = 2, y = 8;//переменная

    size_t k = 0;

    for (size_t i = 0; i < N; i++)
    {
        if (not (x <= arr[i] && arr[i] <= y))
        {
            if (i != k) arr[k] = arr[i];
            ++k;
        }
    }

    for (size_t i = k; i < N; i++) arr[i] = 0;

    for (size_t i = 0; i < N; i++) cout << arr[i] << ' ';
    cout << endl;

    return 0;
}
