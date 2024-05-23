#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    const int FULL_SIZE = 15;
    int arr1[FULL_SIZE];
    int arr2[FULL_SIZE];
    int arr3[FULL_SIZE];
    int size;
    do
    {
        cout << "Enter the size of the array(1-15): ";
        cin >> size;
    } while (size > FULL_SIZE || size <= 0);
    for (int i = 0; i < size; i++)
    {
        arr1[i] = rand() % 20 - 10;
        arr2[i] = rand() % 20 - 10;
    }
    do
    {
        cout << "Array1: ";
        for (size_t i = 0; i < size; i++)
        {
            cout << arr1[i] << " ";
        }
        cout << endl;
        cout << "Array2: ";
        for (size_t i = 0; i < size; i++)
        {
            cout << arr2[i] << " ";
        }
        cout << endl;
        cout << "Array3: ";
        for (size_t i = 0; i < size; i++)
        {
            arr3[i] = arr1[i] + arr2[i];
        }
        for (size_t i = 0; i < size; i++)
        {
            cout << arr3[i] << " ";
        }
        cout << endl;


        break;
    } while (true);

	return 0;
}