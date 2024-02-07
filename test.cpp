#include <bits/stdc++.h>
using namespace std;

void f(vector<int> &arr, int i, int j)
{
    if (i > j)
        return;
    cout << i << " " << j;
    arr[i] = i;
    f(arr, i + 1, j);
}

int main()
{
    vector<int> arr(3,0);
    cout << "enter";
    int start = 0;  // Change the name of the variable
    int end = 3;    // Change the name of the variable
    f(arr, start, end);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
