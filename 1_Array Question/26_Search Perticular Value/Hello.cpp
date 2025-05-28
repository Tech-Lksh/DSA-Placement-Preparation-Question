#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr;
    int i;
    for (i = 0; i < 1000; i++)
    {
        arr.push_back(i);
        // cout << arr[i] << " ";
        if (arr[i] > 100 && arr[i] < 201)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}