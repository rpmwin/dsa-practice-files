#include <iostream>
#include <vector>
using namespace std;

int addArray(vector<int> arr, int n)
{
    int sumans = 0;
    for (int i = 0; i < n; i++)
    {
        sumans = sumans + arr[i];
    }
    cout << "sum of the array is :" << sumans;
    return 0;
}

int main()
{
    int n;
    cout << "enter the size of the array : ";
    cin >> n;

    vector<int> arr(n);

    cout << "enter the elements of the array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    addArray(arr, n);

    return 0;
}