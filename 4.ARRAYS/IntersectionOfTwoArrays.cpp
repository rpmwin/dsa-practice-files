#include <iostream>
#include <vector>
using namespace std;

int *IntersectionArrays(vector<int> arr, vector<int> brr, int n, int m, vector<int> num)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i] == brr[j])
            {
                num.push_back(brr[j]);
                break;
            }
        }
    }
    // to print
    if (num.size() > 0)
    {
        /* code */ cout << "the elements intersecting are:" << endl;
        for (int i = 0; i < num.size(); i++)
        {

            /* code */

            cout << num[i] << ", ";
        }
    }
    else
    {
        cout<<"{no numbers are intersecting!!!!}";
    }

    return 0;
}

int main()
{
    int n;
    cout << "enter the size of the array A:";
    cin >> n;
    int m;
    cout << "enter the size of the array B:";
    cin >> m;
    vector<int> arr(n);
    vector<int> brr(m);
    vector<int> num(0);
    cout << "enter the elements of the array A:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the elements of the array B:";
    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }
    IntersectionArrays(arr, brr, n, m, num);

    return 0;
}