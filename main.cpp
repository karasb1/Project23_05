#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int arr1[10];
    int arr2[5];
    int arr3[5];
    int k = 0;
    for (int i = 0; i < 10; i++)
    {
        arr1[i] = rand() % 20;
    }
    do
    {
        cout << "Array1: ";
        for (size_t i = 0; i < 10; i++)
        {
            cout << arr1[i] << " ";
        }
        cout << endl;
        cout << "Array2: ";
        for (size_t i = 0; i < 10; i++)
        {
            if (i % 2 == 0) {
                arr2[k] = arr1[i];
                k++;
            }
        }
        for (size_t i = 0; i < 5; i++)
        {
            cout << arr2[i] << " ";
        }
        k = 0;
        cout << endl;
        cout << "Array3: ";
        for (size_t i = 0; i < 10; i++)
        {
            if (i % 2 != 0) {
                arr3[k] = arr1[i];
                k++;
            }
        }
        for (size_t i = 0; i < 5; i++)
        {
            cout << arr3[i] << " ";
        }
        cout << endl;


        break;
    } while (true);

    return 0;
}