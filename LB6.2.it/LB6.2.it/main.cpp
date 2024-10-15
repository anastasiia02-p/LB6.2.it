#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void create(int* arr, int SIZE)
{
    int MIN = 5;
    int MAX = 90;
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = MIN + rand() % (MAX - MIN + 1);
    }
}

void Print(int* arr, const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
        cout << setw(4) << arr[i];
    cout << endl;
}

int sum(int* arr, int SIZE)
{
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] % 2 == 0 || !(i % 8 == 0))
            sum += arr[i];
    }
    return sum;
}

int count(int* arr, int SIZE)
{
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] % 2 == 0 || !(i % 8 == 0))
            count++;
    }
    return count;
}

void updateArray(int* arr, int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] % 2 == 0 || !(i % 8 == 0))
        {
            arr[i] = 0;
        }
    }
}

void findMinMaxIndices(int* arr, int SIZE, int& minIndex, int& maxIndex)
{
    minIndex = 0;
    maxIndex = 0;
    for (int i = 1; i < SIZE; i++)
    {
        if (arr[i] < arr[minIndex])
            minIndex = i;
        if (arr[i] > arr[maxIndex])
            maxIndex = i;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    const int SIZE = 25;
    int arr[SIZE];
    create(arr, SIZE);
    Print(arr, SIZE);
    cout << endl;

    int minIndex, maxIndex;
    findMinMaxIndices(arr, SIZE, minIndex, maxIndex);
    cout << "Index of min element: " << minIndex << ", value: " << arr[minIndex] << endl;
    cout << "Index of max element: " << maxIndex << ", value: " << arr[maxIndex] << endl;

    cout << "sum = " << sum(arr, SIZE) << endl;
    cout << "count = " << count(arr, SIZE) << endl;

    updateArray(arr, SIZE);
    Print(arr, SIZE);

    return 0;
}
