#include <iostream>
#include <vector>
using namespace std;

// reverse form the starting of an array
vector<int> reverse(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;
    while (s <= e)
    {
        int temp = v[s];
        v[s] = v[e];
        v[e] = temp;
        s++;
        v--;
    }
    return v;
}

// reverse form an index of array
vector<int> reverseFromIndex(vector<int> arr)
{
    cin << "enter the current position \n";
    << int s = pos;
    int e = arr.size() - 1;
    while (s <= e)
    {
        int temp = v[s];
        v[s] = v[e];
        v[e] = temp;
        s++;
        v--;
    }
    return v;
}

void print(vector<int> v)
{
    for (int i = 0; i < v.size() - 1)
    {
        cout << " " << v[i];
    }
    cout << endl
}

int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);
    v.push_back(5);

    vector<int> ans = reverse(v);
    return 0;
}