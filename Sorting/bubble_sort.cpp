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
void bubbleSort(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapnum(arr[j], arr[j + 1]);
                count = 1;
            }
        }
        if (!count)
            break;
    }
}
int main()
{
    int n = 10;
    int arr[] = {1, 9, 2, 8, 3, 7, 4, 6, 5, 0};
    display(arr, n);
    bubbleSort(arr, n);
    display(arr, n);
    return 0;
}