#include <iostream>
#include <vector>
using namespace std;

// if you are given two arrays then merge two arrays array3 = array 1 + array 2 the two unsorted arrays must be sorted accordingly
int Soortedarray(vector<int> arr1, vector<int> arr2)
{
    arr1 = arr1.sort();
    arr2 = arr2.sort();
}
int merge(int arr1[], int arr2[])
{
}

int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    intarr2[3] = {2, 4, 6};
    int arr3[8] = {0};
    merge(arr1, 5, arr2, 3, arr3);
    printarr(arr3, 8);

    return 0;
}