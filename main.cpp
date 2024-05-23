#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    const int FULL_SIZE = 20;
    int arr[FULL_SIZE];
    int size;
    do
    {
        cout << "Enter the size of the array: ";
        cin >> size;
    } while (size > FULL_SIZE || size <= 0);
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10 - 10;
    }
    do
    {
        cout << "Array: ";
        for (size_t i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }











        break;
    } while (true);



    return 0;
}