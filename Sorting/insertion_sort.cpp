#include <iostream>
using namespace std;

void swapnum(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        cout << endl;
    }
}

void insertionSort(int *arr, int size)
{
    int key, j;
    for (int i = 0; i < size; i++)
    {
        key = arr[i];
        j = i;
        while (j > 0 && arr[j - 1] > key)
        {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = key;
    }
}

int main()
{
    int n = 10;
    int arr[] = {1, 9, 2, 8, 3, 7, 4, 6, 5, 0};
    display(arr, n);
    insertionSort(arr, n);
    display(arr, n);
    return 0;
}