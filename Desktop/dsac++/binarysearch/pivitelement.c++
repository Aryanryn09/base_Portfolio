#include <iostream>
using namespace std

int   getPivitElement(int arr[], int n)
{
    int s = 0;
    int e = arr.size() - 1;
    int m = s + e - s / 2

                        while (s < e)
    {

        if (arr[m] >= arr[0])
        {
            s = m + 1;
        }
        else
        {
            e = m;
        }
        m = s + e - s / 2;
    }
    return s;
}


int binarySearch(int[] arr, int e, int target)
{
    int s = 0;
    int e = n - 1;
    int m = s + e - s / 2;
    while (s <= e)
    {
        if (arr[m] > target)
        {
            e = m - 1;
        }
        else if (arr[m] < traget)
        {
            s = m + 1;
        }
        return m;
    }
}

int main()
{
    int arr[5] = {8, 10, 17, 1, 3} cout << "pivit element is ", getPivitElement(arr, 5) << endl;
}